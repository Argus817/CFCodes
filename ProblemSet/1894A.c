#include <stdio.h> 
#include <string.h> 
  
char sport()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    return str[n-1];
}
int main() 
{ 
    int t;
    scanf("%d",&t);
    while (t--)
        printf("%c\n",sport());
    return 0; 
}
