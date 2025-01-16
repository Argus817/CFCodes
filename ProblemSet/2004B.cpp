#include <bits/stdc++.h>
using namespace std;

#define sp ' '
#define mod(x) (((x)>0)? (x) : -(x))

void solve()
{
    int l,r,L,R,res;
    cin >> l >> r >> L >> R;
    if (l==L && r==R)
        res = R-L;
    else if (r<L || R<l)  //disjoint 
        res = 1;
    else if (r==L || R==l)
        res = 2;
    else if (L<l && l<R && R<r)   //L l R r all unequal, joint
        res = R-l+2;
    else if (l<L && L<r && r<R)  //l L r R all unequal, joint
        res = r-L+2;
    else if (l<L && R<r)   //l L R r contained unequal
        res = R-L+2;
    else if (L<l && r<R)  //L l r R contained unequal
        res = r-l+2;
    else if (L==l && r<R)  //L==l r R contained
        res = r-l+1;
    else if (L<l && r==R)  //L l r==R contained
        res = r-l+1;
    else if (L==l && R<r)  //l==L R r contained
        res = R-L+1;
    else if (l<L && r==R)  //l L R==r contained
        res = R-L+1;
    cout << res << endl;
}

void execute()
{
    /*
    int x = solve();
    if (x)
        cout << "YES\n";
    else 
        cout << "NO\n";
    */

    
    solve();
    
}

int main()
{
    int t;
    cin >> t;
    while (t--) execute();
    return 0;
}
