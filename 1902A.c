#include <stdio.h>
#include <string.h>
int binary()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s", str);
    if (strchr(str, '0')) return 1;
    else return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x = binary();
        if (x) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
