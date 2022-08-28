#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x

using namespace std;

void solution()
{
    ll n;ll c=0;
    cin>>n;
    int a[n+1], b[n+1];
    rep(i,n) cin>> a[i];
    rep(i,n) cin>> b[i];
    rep(j,n)
    {
        for(int i=0; i<n && i<j; i++)
        {
            if(a[i]==b[j] && b[i]==a[j]) c++;
        }
    }
    cout << c<< endl;
}


int32_t main()
{
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}
    