#include <stdio.h>
int fac2023()
{
    int n,k,i,bprod=1;
    scanf("%d %d",&n,&k);
    int b[n];
    for (i=0; i<n; i++)
        scanf("%d",b+i);
    for (i=0; i<n; i++)
    {
        bprod = bprod*b[i];
        if (2023%bprod!=0) 
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n%d ",(2023/bprod));
    for (i=1; i<k; i++)
        printf("1 ");
    printf("\n");
    return 0;
} 
int main() 
{ 
    int t;
    scanf("%d",&t);
    while (t--)
        fac2023();
    return 0;
}
