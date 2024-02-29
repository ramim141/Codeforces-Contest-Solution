/*Problem link: https://codeforces.com/contest/1873/problem/C*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define pb push_back
#define mp make_pair

#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vvs vector<string>
#define vvb vector<vector<bool>>
#define vvvi vector<vector<vector<int>>>
#define si set<int>
#define sl set<ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define Ramu                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    char a[11][11];

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            a[i][j] = '.';
        }
    }

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'X')
            {
                if (i == 1 || i == 10 || j == 1 || j == 10)
                    c1++;
                else if (i == 2 || i == 9 || j == 2 || j == 9)
                    c2++;
                else if (i == 3 || i == 8 || j == 3 || j == 8)
                    c3++;
                else if (i == 4 || i == 7 || j == 4 || j == 7)
                    c4++;
                else if (i == 5 || i == 6 || j == 5 || j == 6)
                    c5++;
            }
        }
    }
    cout << c1 * 1 + c2 * 2 + c3 * 3 + c4 * 4 + c5 * 5 << endl;
}
int main()
{
    Ramu int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
