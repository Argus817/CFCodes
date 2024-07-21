#include <bits/stdc++.h>
using namespace std;

int bananas()
{
    int a,b,c,fmax=0;
    cin >> a >> b >> c;
    int com[21][3] = {{0,0,5},{0,1,4},{0,2,3},{0,3,2},{0,4,1},{0,5,0},{1,0,4},{1,1,3},{1,2,2},{1,3,1},{1,4,0},{2,0,3},{2,1,2},{2,2,1},{2,3,0},{3,0,2},{3,1,1},{3,2,0},{4,0,1},{4,1,0},{5,0,0}};
    
    for (int i=0; i<21; i++)
    {
        int x=com[i][0], y=com[i][1], z=com[i][2];
        int f = (a+x)*(b+y)*(c+z);
        if (f>fmax)
            fmax = f;
    }
    return fmax;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << bananas() << endl;
    return 0;
}

