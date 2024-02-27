#include <stdio.h> 
#include <string.h> 
  
void action()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    char s[n];
    scanf("%s",s);
    int countb = 0;
    for (i=0; i<n; i++)
        if (s[i]=='B') countb++;
    if (countb==k)
        printf("0\n");
    else if (countb>k)
    {
        int j=0;
        for (i=n-1; i>=0; i--)
        {
            if (j==k) break;
            if (s[i]=='B') j++;
        }
        printf("1\n%d A\n",(i+1));
    }
    else
    {
        //have to change first (k-countb) number of A's to B's
        int counta=0;
        for (i=0; i<n; i++)
        {
            if (s[i]=='A') counta++;
            if (counta==(k-countb)) break;
        }
        printf("1\n%d B\n",(i+1));            
    }
}
int main() 
{ 
    int t;
    scanf("%d",&t);
    while (t--)
        action();
    return 0; 
}

