#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define pb push_back
#define mp make_pair

#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int, int>>
#define vpll vector < pair
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector < vector<ll>
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

void solution()
{
    ll n, x;
    cin >> n >> x;

   vll nums(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    ll left = 0;
    ll right = 1e10;
    ll ans = 0;

    while (left <= right)
    {
        ll mid = (left + right) / 2;
        ll w = 0;

        for (ll i = 0; i < n; i++)
        {
            if (nums[i] < mid)
            {
                w += (mid - nums[i]);
            }
        }

        if (w <= x)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans << endl;
}
int main()
{
    Ramu int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}