#include <bits/stdc++.h>
using namespace std;
#define p(x) (p[(x)-1])
#define pi(x) (pi[(x)-1])
#define colour(x) (colour[(x)-1])
#define count(x) (count[(x)-1])

void dfsVisit(int u, int p[], int n, int count[], char colour[], int pi[], int c);
void dfs(int p[], int n, int count[]);
int twoFriends();

void dfs(int p[], int n, int count[])
{
    char colour[n];
    int pi[n];
    for (int i=0; i<n; i++)
    {
        colour[i] = 'w';
        pi[i] = -1;
    }
    for (int i=1; i<=n; i++)
    {
        if (colour(i) == 'w')
            dfsVisit(i, p, n, count, colour, pi, 0);
    }
}

void dfsVisit(int u, int p[], int n, int count[], char colour[], int pi[], int c)
{
    if (c<3)
        c++;
    colour(u) = 'g';
    if (colour(p(u)) == 'w')
    {
        pi(p(u)) = u;
        dfsVisit(p(u), p, n, count, colour, pi, c);
    }
    else
        count(u) = c;
    colour(u) = 'b';
}

int twoFriends()
{
    int n, min;
    cin >> n;
    min = n+1;
    int p[n];
    int count[n] = {0};
    for (int i=0; i<n; i++)
        cin >> p[i];
    if (n==2)
        return 2;
    dfs(p, n, count);
    for (int i=0; i<n; i++)
    {
        if (count[i] < min && count[i]!=0)
            min = count[i];
    }
    return min;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << twoFriends() << endl;
    return 0;
}

