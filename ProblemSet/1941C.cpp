#include <bits/stdc++.h>
using namespace std;

int ugly()
{
    int n,count=0;
    cin >> n;
    string s;
    cin >> s;
    for (int i=0; i<n-2; i++)
    {
        if (s[i]=='m')
        {
            if (s[i+1]=='a' && s[i+2]=='p')
            {
                if (i+4<n && (s[i+3]=='i' && s[i+4]=='e'))
                {
                    count++;
                    i+=4;
                }
                else
                {
                    count++;
                    i+=2;
                }
            }
        }
        else if (s[i]=='p')
        {
            if (s[i+1]=='i' && s[i+2]=='e')
            {
                count++;
                i+=2;
            }
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << ugly() << endl;        
    return 0;
}

