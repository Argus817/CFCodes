#include <bits/stdc++.h>
using namespace std;

#define sn struct node

sn {
    int data;
    int count;
    sn *left;
    sn *right;
};

void insert(sn **root, int value)
{
    
    if (*root)
    {
        if ((*root)->data > value)
            insert(&((*root)->left), value);
        else if ((*root)->data < value)
            insert(&((*root)->right), value);
        else
            (*root)->count++;
    }
    else
    {
        sn *p = (sn *)malloc(sizeof(sn));
        p->data=value;
        p->count=1;
        p->right=NULL;
        p->left=NULL;
        *root = p;
    }
}

int countSearch(sn *root, int mincount)
{
    if (root)
    {
        int x=0,y=0,z=0;
        x = countSearch(root->left, mincount);
        if (root->count >= mincount)
            return 1;
        else
            y = 0;
        z = countSearch(root->right, mincount);
        return x|y|z;
    }
    return 0;
}

int card()
{
    int n,k;
    cin >> n >> k;
    sn *root = NULL;
    for (int i=0; i<n; i++)
    {
        int val;
        cin >> val;
        insert(&root, val);
    }
    if (k>n)
        return n;
    if (countSearch(root, k))
        return k-1;
    else
        return n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << card() << endl;
    return 0;
}

