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
    ll int  n, k;
    cin >> n >> k;

    vll p(n), m(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    ll power = accumulate(p.begin(), p.end(), 0); // 1+2+3 = 6

    ll total_m = 0, to_kill = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> m[i];              // -1, 2, 3
        total_m += abs(m[i]);     // 1+2+3 = 6
        to_kill += k * abs(m[i]); // 2*1 + 2*2 + 2*3 = 12
    }

    // if (power < k * total_m)  // 6 < ( 2 * 6) == 6 < 12
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
     bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (p[i] > k * abs(m[i]))  
        {
            ok = false;
           //ok = true;
            break;
        }
    }

    ll gun = power / total_m;  
    if (gun < k && ok)  
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
