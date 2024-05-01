#include <bits/stdc++.h>
using namespace std;


#define sn struct node
#define ht struct hashtable

sn {
    int data;
    sn *next;
};

ht {
    int cap, n;
    sn **arr;
};

void initNode(sn **node, int value);
void initHashMap(ht **map, int capacity);
int hashFunc(ht *map, int value);
void mapInsert(ht *map, int value);
int mapSearch(ht *map, int key);
void mapDelete(ht *map, int value);

void initNode(sn **node, int value)
{
    (*node) = (sn *)malloc(sizeof(sn));
    (*node)->data = value;
    (*node)->next = NULL;
}

void initHashMap(ht **map, int capacity)
{
    (*map) = (ht *)malloc(sizeof(ht));
    (*map)->cap = capacity;
    (*map)->n = 0;
    (*map)->arr = (sn **)calloc((*map)->cap, sizeof(sn *));
}

int hashFunc(ht *map, int value)
{
    int primes[] = {11,13,17,19,23,29,31,37,41,43};
    int e=8, p1=primes[value%10], p2 = primes[value%10], n=p1*p2;
    int index = 1;
    for (int i=0; i<e; i++)
        index = (index*value) % n;
    return index%map->cap;
}

void mapInsert(ht *map, int value)
{
    int index = hashFunc(map,value);
    sn *node;
    initNode(&node,value);
    if (map->arr[index] == NULL) 
        map->arr[index] = node;
    else
    {
        node->next = map->arr[index];
        map->arr[index] = node;
    }
}

int mapSearch(ht *map, int key)
{
    int index = hashFunc(map,key);
    sn *head;
    head = map->arr[index];
    while (head)
    {
        if (head->data == key)
            return 1;
        head = head->next;
    }
    return 0;
}

//HashTable end

void merger()
{
    int n;
    cin >> n;
    int arr[2*n];
    vector <int> v;
    ht *map;
    initHashMap(&map, n);
    for (int i=0; i<(2*n); i++)
        cin >> arr[i];
    for (int i=0; i<(2*n); i++)
    {
        int key = arr[i];
        if (mapSearch(map,key)) //element found
            continue;
        else //element not found
        {
            v.push_back(key);
            mapInsert(map,key);
        }
    }
    for (int i=0; i<n; i++)
        cout << v[i] << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--) merger();
    return 0;
}
