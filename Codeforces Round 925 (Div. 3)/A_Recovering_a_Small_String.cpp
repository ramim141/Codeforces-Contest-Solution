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

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string mamu = "";

    for (int i = 1; i <= 26; i++)
    {
        for (int j = 1; j <= 26; j++)
        {
            int k = n - i - j;
            if (k >= 1 && k <= 26)
            {

                mamu += string(1, (char)(i + 'a' - 1));
                mamu += string(1, (char)(j + 'a' - 1));
                mamu += string(1, (char)(k + 'a' - 1));
                mamu += '\n';
                cout << mamu;
                return;
            }
        }
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
