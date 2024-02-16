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
    int n, m;
    cin >> n >> m;

    // int a[n];
    vll first(n);
    vll copyV;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> first[i];
        int cnt1 = 0;
        int d = first[i];
        while (d > 0)
        {
            if (d % 10 == 0)
                cnt1++, d = d / 10;
            else
                break;
        }
        copyV.push_back(cnt1);
        int digits = 0;
        while (first[i] > 0)
        {
            first[i] = first[i] / 10;
            digits++;
        }
        sum += digits;
    }

    sort(copyV.begin(), copyV.end());
    ll ans = 0;
    for (int i = copyV.size() - 1; i >= 0; i--)
    {
        ans += copyV[i];
        i--;
    }

    ll add = sum - ans;

    if (add >= (m + 1))
    {
        cout << "Sasha" << endl;
    }
    else
    {
        cout << "Anna" << endl;
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
