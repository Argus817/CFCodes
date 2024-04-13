#include <bits/stdc++.h>
using namespace std;
#define sn struct node

sn {
    int data;
    sn *left;
    sn *right;
};

int insert(sn **root, int value)
{
    if (*root)
    {
        if ((*root)->data==value)
            return 1;
        else if ((*root)->data > value)
            return insert(&((*root)->left),value);
        else if ((*root)->data < value)
            return insert(&((*root)->right),value);
    }
    sn *p = (sn *)malloc(sizeof(sn));
    p->data = value;
    p->right = NULL;
    p->left = NULL;
    *root = p;
    return 0;
}

int cardgame()
{
    int n, count=0;
    cin >> n;
    sn *root = NULL;
    for (int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        count += insert(&root, a);
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << cardgame() << endl;
    return 0;
}
