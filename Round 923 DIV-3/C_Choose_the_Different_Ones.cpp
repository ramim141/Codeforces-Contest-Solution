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

void ok(set<int> &s1, set<int>&s2, int k)
{
    bool ok = true;
    set<int>nw;
    for (auto x : s1)
    {
        nw.insert(x);
    }

    for (auto it : s2)
    {
        nw.insert(it);
    }

    for (int i = 1; i <= k; i++)
    {
        if (nw.find(i) == nw.end())
            ok = false;
    }
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
void solve()
{

    int n, m, k;
    cin >> n >> m >> k;
    vi a(n);
    vi b(m);
    // sort(a.begin(), a.end());
    // sort(b.begin(), b.end());

    set<int> s1;
    set<int> s2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= k)
            s1.insert(a[i]);
    }

    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
        if (b[j] <= k)
            s2.insert(b[j]);
    }
    if (s1.size() < k / 2 || s2.size() < k / 2)
        cout << "NO" << endl;
    else 
    {
        ok(s1, s2, k);
    }

    // vi v(a.begin(), a.end());
    // vi::iterator it;

    // it = unique(v.begin(), v.end());
    // v.resize(distance(v.begin(), it));

   
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
