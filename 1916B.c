#include <stdio.h>
long int gcd(long int *x, long int *y)
{
    long int i,lcm=0;
    for (i=1; 1; i++)
    {
        if ((lcm=(*y)*i)%(*x)==0) break;
    }
    return (*x)*(*y)/lcm;
}
long int divisors()
{
    long int a,i,b;
    scanf("%li %li",&a,&b);
    if (b%a==0)
        return b*b/a;
    else
        return b*a/gcd(&a,&b);
} 
int main() 
{ 
    int p;
    scanf("%d",&p);
    while (p--)
        printf("%li\n",divisors());
    return 0;
}
