    #include <bits/stdc++.h>
    using namespace std;
    void ulp()
    {
        int n,i;
        cin>>n;
        string s; cin >> s;
             
        for (i=2; i<n; i++) 
        {
            cout << s[i-2];
            if (s[i]=='a' || s[i]=='e') cout << ".";
        }
        cout << s[n-2]<<s[n-1]<<endl;
    }
    int main() 
    { 
        int t;
        cin>>t;
        while (t--)
            ulp();
        return 0;
    }
