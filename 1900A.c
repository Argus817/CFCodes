#include <stdio.h>
#include <string.h>
int minacts(char s[], int n);
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        printf("%d\n", minacts(str,n));
    }
    return 0;
}
int minacts(char s[], int n)
{
    if (strstr(s,"...")!=NULL) return 2;
    int count = 0;
    char x;
    while (x=*(s++))
        if (x=='.') count++;
    return count;
}
