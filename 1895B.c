#include <stdio.h>
int abs(int num)
{
    if (num>=0) return num;
    else return (num*(-1));
}
void sort(int a[], int len)
{
    int i,j;
    for (i=len-1; i>=1; i--)
    {
        for (j=0; j<i; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void mindist()
{
    int n,i,s=0;
    scanf("%d",&n);
    int arr[2*n];
    for (i=0; i<2*n; i++)
        scanf("%d",&arr[i]);
    sort(arr,2*n);
    for (i=0; i<n-1; i++)
        s = s+abs(arr[i]-arr[i+1])+abs(arr[2*n-1-i]-arr[2*n-2-i]);
    printf("%d\n",s);
    for (i=0; i<n; i++)
        printf("%d %d\n",arr[i],arr[2*n-1-i]);
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        mindist();
    }
    return 0;
}
