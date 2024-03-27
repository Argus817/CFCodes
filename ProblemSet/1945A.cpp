#include <bits/stdc++.h>
using namespace std;

int tent()
{
    int in,ex,uni,no=0;
    cin >> in >> ex >> uni;
    if (ex%3!=0 && 3-(ex%3)>uni) return -1;
    no += in;
    no += ex/3;
    no += ((uni+(ex%3))%3==0)? (uni+(ex%3))/3: (uni+(ex%3))/3+1;
    return no;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << tent() << endl;
    return 0;
}