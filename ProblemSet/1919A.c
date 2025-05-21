#include <stdio.h> 
void wex()
{
    int a,b;
    scanf("%d %d",&a, &b);
    if ((a+b)%2==0) printf("Bob\n");
    else printf("Alice\n");
}
int main() 
{ 
    int t;
    scanf("%d",&t);
    while (t--)
        wex();
    return 0; 
}
