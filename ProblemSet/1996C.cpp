#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define c(x) ((x)? (c[(x)-1]):0)

void sortNquery()
{
    int n,q;
    cin >> n >> q;
    char a[n];
    char b[n];
    int c[26][n] = {0};
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
        cin >> b[i];
    for (int i=0; i<26; i++)
    {
        int count = 0;
        for (int j=0; j<n; j++)
        {
            if (a[j]==(char)(i+'a'))
                count++;
            if (b[j]==(char)(i+'a'))
                count--;
            c[i][j] = count;
        }
    }/*
    for (int i=0; i<26; i++)
    {
        cout << "c[" << (char)(i+'a') << "][] ";
        for (int j=0; j<n; j++)
            cout << c[i][j] << ' ';
        cout << endl;
    }*/
    
    while (q--)
    {
        int l,r,res=0;
        cin >> l >> r;
        for (int i=0; i<26; i++)
            res += abs((r? c[i][r-1] : 0)-((l-1)? c[i][l-1-1] : 0)); 
        cout << res/2 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        sortNquery();
    return 0;
}

