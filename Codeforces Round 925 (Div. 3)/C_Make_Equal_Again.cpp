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
    ll n;
    cin >> n;
    vll v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // ll x = 1, y = 1;
    // ll i = 0;
    int x = 1;
    int y = 1;

    if (n == 1)
    {
        cout << "0\n";
        return;
    }
    // int first_val = v[0];
    for (ll i = 1; i < n; i++)
        if (v[i] == v[i - 1])
            x++;
        else
            break;

    for (ll i = n - 2; i >= 0; i--)
        if (v[n - 1] == v[i])
            y++;
        else
            break;

    ll m = 0;
    ll xy = x + y;  
    ll mx = max(m, n - xy); // n - x+y x = 2, y = 3 7-5 =
    if (v[0] == v[n - 1])
        cout << mx << '\n';
    else
        cout << n - max(x, y) << '\n';
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
