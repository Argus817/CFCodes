    #include <bits/stdc++.h>
    using namespace std;
     
    void flipping()
    {
        int ia, ib,n;
        string s;
        cin>>n>>s;
        for (int i=0; i<n; i++)
        {
            if(s[i]=='A')
            {
                ia=i;
                break;
            }            
        }
        for (int i=n-1; i>=0; i--)
        {
            if(s[i]=='B')
            {
                ib=i;
                break;
            }            
        }
        n=(ib-ia>0)?(ib-ia):0;
        cout << n << "\n";
    }
     
    int main()
    {
        int t;
        cin >> t;
        while (t--)
            flipping();
        return 0;
    }
