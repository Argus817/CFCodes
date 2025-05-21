#include <stdio.h>
int swap()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++)
        scanf("%d",(arr+i));
    if (arr[0]!=1 || arr[0]==n)
        return 0;
    else return 1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x = swap();
        if (x) printf("YES\n");
        else printf("NO\n");
    }
}
