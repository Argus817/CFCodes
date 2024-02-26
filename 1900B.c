#include <stdio.h> 
int ops(int y1, int y2)
{
    y2 = (y2-y1>0)? (y2-y1):(y1-y2);
    if (y2%2!=0) return 0;
    else return 1;
}
void laura()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    printf("%d %d %d\n",ops(b,c),ops(a,c),ops(a,b)); 
}
int main() 
{ 
    int t;
    scanf("%d",&t);
    while (t--)
        laura();
    return 0; 
}
