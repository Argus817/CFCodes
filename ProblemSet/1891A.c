#include <stdio.h> 
#include <math.h> 
#define min(a,b) (a)<(b)?(a):(b)
  
int twos()
{
    int n,m;
    scanf("%d", &n);
    int arr[n];
    for (m=0; m<n; m++)
        scanf("%d", &arr[m]);
    if (n<=3) return 1;
    for (m=1; pow(2,m)<n; m++)
    {
        int i,x = (int)pow(2,m), y=min((int)pow(2,m+1),n);
        for (i=x; i<y-1; i++)
        {
            if (arr[i]>arr[i+1]) 
                return 0;
        }
    }    
    return 1;
}
int main() 
{ 
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a = twos();
        if (a) printf("YES\n");
        else printf("NO\n");
    }
    return 0; 
}

