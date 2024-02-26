#include <stdio.h>
int incsorted(int arr[], int n)
{
    int i;
    for (i=0; i<n-1; i++)
    {
        if (arr[i]>arr[i+1])
            return 0;
    }
    return 1;
}
int boxes()
{
    int i,n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for (i=0; i<n; i++)
        scanf("%d",&arr[i]);
    if (k>1) return 1;
    if (incsorted(arr,n)) return 1;
    else return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x = boxes();
        if (x) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
