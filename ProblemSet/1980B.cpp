#include <bits/stdc++.h>
#define arr(x) (arr[n-(x)])
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int p, int r)
{
    int i=p-1,x=arr[r];
    for (int j=p; j<r; j++)
    {
        if (arr[j]<=x)
        {
            i++;
            swap(arr+i,arr+j);
        }
    }
    swap(arr+i+1, arr+r);
    return i+1;
}

void QuickSort(int arr[], int p, int q)
{
    if (p<q)
    {
        int r = partition(arr,p,q);
        QuickSort(arr,p,r-1);
        QuickSort(arr,r+1,q);
    }
}

int cubes()
{
    int n,f,k;
    cin >> n >> f >> k;
    int arr[n];
    for (int i=0; i<n; i++)
        cin >> arr[i];

    if (k==n) return 1;
    int fav = arr[f-1];
    QuickSort(arr,0,n-1);
    if (arr(k)<fav)
        return 1;
    else if (arr(k)>fav)
        return -1;
    else
    {
        if (arr(k+1)==fav)
            return 0;
        else
            return 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = cubes();
        if (x==-1)
            cout << "NO";
        else if (x==0)
            cout << "MAYBE";
        else if (x==1)
            cout << "YES";
        cout << endl;
    }
    return 0;
}

