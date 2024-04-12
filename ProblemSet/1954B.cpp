#include <bits/stdc++.h>
using namespace std;

int ugly()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin >> arr[i];
    int no = arr[0];
    int count=0, mincount=n+1, difcount=0, i=0;
    while (i<n)
    {
        if (arr[i]==no)
        {
            count++;
        }
        else
        {
            difcount++;
            mincount = (count<mincount)? count:mincount;
            count=0;
        }
        i++;
    }
    mincount = (count<mincount)? count:mincount;
    if (difcount==0)
        return -1;
    else if (mincount == n)
        return -1;
    else
        return mincount;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << ugly() << endl;
    return 0;
}
