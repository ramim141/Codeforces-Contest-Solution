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
    int n;
    cin >> n;

    vi v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt_0 = 0;
    int cnt_1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            cnt_0 = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 1)
        {
            cnt_1 = i;
            break;
        }
    }

    int cnt_ans = 0;
    for (int i = cnt_0; i <= cnt_1; i++)
    {
        if (v[i] == 0)
        {
            cnt_ans++;
        }
    }

    cout << cnt_ans << "\n";
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
