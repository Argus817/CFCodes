#include <bits/stdc++.h>
using namespace std;

void binpath()
{
    int n;
    cin >> n;
    string a[2];
    cin >> a[0] >> a[1];
    int x=0,y=n,i=0,j=-1;
    while (i<n-1)
    {
        if (a[0][++i]==a[1][i-1])
        continue;
        else 
        {
            if (a[0][i]=='0')
                x=i;
            else
            {
                y=i;  
                break;
            }        
        }   
    }
    if (x==0 && y==n)
    {
        for (i=0; i<n; i++)
            cout << a[0][i];
        cout << a[1][n-1];   
    }
    else
    {
        for (i=0; i<y; i++)
            cout << a[0][i];
        for (i=y-1; i<n; i++)     
            cout << a[1][i];
    }    
    cout << "\n" << y-x << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        binpath();
    return 0;    
}