#include <stdio.h>
int chem()
{
    int oddelem=0,n,k,i;
    scanf("%d %d",&n,&k);
    char s[n];
    scanf("%s",s);
    int arr[26]={0};
    for (i=0; i<n; i++)
        arr[s[i]-97]++;
    for (i=0; i<26; i++)
    {
        if (arr[i]%2!=0) 
            oddelem++;
    }
    if (oddelem<=k) return 1;
    else if (oddelem-k==1) return 1;
    else return 0;
} 
int main() 
{ 
    int t;
    scanf("%d",&t);
    while (t--)
        if (chem()) printf("YES\n");
        else printf("NO\n");
    return 0;
}
