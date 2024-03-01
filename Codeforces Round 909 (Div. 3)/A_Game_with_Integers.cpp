/* Problem link: https://codeforces.com/contest/1899/problem/A*/

#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin>>n;

    if((n+1)%3==0 || (n-1)%3==0)
    {
        cout<<"First"<<endl;
    }
    else 
    {
        cout<<"Second"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}