#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    int bcount=0, ecount=0;
    cin >> a >> b;
    int arr[a.length()+1] = {0};
    for (int i=0; i<a.length(); i++)
    {
        if (a[i]=='1')
            arr[i+1] = arr[i]+1;
        else 
            arr[i+1] = arr[i];
    }
    for (int i=0; i<b.length(); i++)
    {
        if (b[i]=='1') bcount++;
    }
    for (int i=b.length()-1; i<a.length(); i++)
    {
        int acount = arr[i+1]-arr[i+1-b.length()];
        if ((acount+bcount)%2==0) ecount++;
    }
    cout << ecount << "\n";
    return 0;
}
