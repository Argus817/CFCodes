#include <bits/stdc++.h>
using namespace std;

int piranha()
{
    int n;
    vector <int> vec;
    cin >> n;
    int MaxI = 0;
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if (i!=0 && x>vec[MaxI])
            MaxI=i;
        vec.push_back(x);
    }
    
    
    for (int i=1; i<n; i++)
    {
        if(vec[i]>=vec[MaxI])
            MaxI=i;
        else
            break;
    }
    if (MaxI!=n-1)
        return MaxI+1;
    else
    {
        if (vec[MaxI]!=vec[MaxI-1])
            return MaxI+1;
    }
    
    for (int i=n-1; i>=0; i--)
    {
        if (vec[i]>=vec[MaxI])
            MaxI=i;
        else
            break;
    }
    if (MaxI!=0)
        return MaxI+1;
    else
    {
        if (vec[MaxI]!=vec[MaxI+1])
            return MaxI+1;
    }
    
    return -1;
        
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << piranha() << endl;
    return 0;
}