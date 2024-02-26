#include <stdio.h> 
int absolute(int *x)
{
    if (*x<0) return (*x)*(-1);
    else return *x;
}
int pmsplit()
{
    int n,i,sum=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for (i=0; i<n; i++)
    {
        if (s[i]=='+') sum++;
        else sum--;
    }
    return absolute(&sum);
}
int main() 
{ 
    int t;
    scanf("%d",&t);
    while (t--)
        printf("%d\n",pmsplit());
    return 0; 
}
