#include <stdio.h>
int chest()
{
    int c,k,mt;
    scanf("%d %d %d",&c,&k,&mt);
    if (k<=c)
        return c;
    else //c<k
    {
        if (k-c<=mt) return k;
        else return (k+k-c-mt);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
        printf("%d\n",chest());
    return 0;
}
