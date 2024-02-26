#include <stdio.h>
void ulp()
{
    int n,i,j;
    scanf("%d",&n);
    char s[n];
    for(j = 0;j<n;j++) {
        char c; c = getchar();s[j]=c;
    }  
        //dababbabababbabbababba
    for (i=2; i<n; i++) //da.bab.ba.ba.bab.bab.ba.bab.ba
    {
        printf("%c",s[i-2]);
        if (s[i]=='a' || s[i]=='e') printf(".");
    }
    printf("%c%c\n",s[n-2],s[n-1]);
    printf("%s",s);
}
int main() 
{ 
    int t;
    scanf("%d",&t);
    while (t--)
        ulp();
    return 0;
}
