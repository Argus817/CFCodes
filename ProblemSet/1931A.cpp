#include <bits/stdc++.h>
using namespace std;

string SmallString()
{
    int n;
    cin >> n;
    for (int i=1; i<27; i++)
    {
        for (int j=1; j<27; j++)
        {
            for (int k=1; k<27; k++)
            {
                if (i+j+k==n)
                {
                    string s = "";
                    s.push_back((char)(i+96));
                    s.push_back((char)(j+96));
                    s.push_back((char)(k+96));
                    return s;
                }
            }
        }
    }
    return "abc";
}


int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << SmallString() << endl;
    return 0;
}