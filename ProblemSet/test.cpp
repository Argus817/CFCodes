#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.insert(v.begin()+0,4);
    cout<<v[0]<<"\n"<<v[1]<<endl;
}
