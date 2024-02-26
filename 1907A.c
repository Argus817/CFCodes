#include <stdio.h>
void rook()
{
    char st[2];
    int i;
    scanf("%s", st);
    for (i=97; i<=104; i++)
    {
        if (st[0]==i) continue;
        printf("%c%c\n",i,st[1]);
    }
    for (i=49; i<=56; i++)
    {
        if (st[1]==i) continue;
        printf("%c%c\n",st[0],i);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
        rook();
    return 0;
}
