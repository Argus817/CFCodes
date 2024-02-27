#include <stdio.h>
int minvol(int arr[], int n, int x);
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n,x;
        scanf("%d %d",&n,&x);
        int arr[n];
        for (i=0; i<n; i++)
            scanf("%d", &arr[i]);
        printf("%d\n",minvol(arr,n,x));
    }
}
int minvol(int arr[], int n, int x)
{
    int maxdiff=0,i;
    for (i=0; i<n-1; i++)
        maxdiff = (maxdiff<(arr[i+1]-arr[i]))? (arr[i+1]-arr[i]):maxdiff;
    maxdiff = (maxdiff<((x-arr[n-1])*2))? ((x-arr[n-1])*2):maxdiff;
    maxdiff = (maxdiff<arr[0])? arr[0]:maxdiff;
    return maxdiff;
}
