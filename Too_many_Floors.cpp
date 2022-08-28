#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)
#define pii pair<int,int>
#define vi vector<int>

using namespace std;

void solution()
{
    int x,y;
    cin>>x>>y;
    int a=0,b=0;
    if(x%10==0) 
    {
        a=x/10;
    }
    else 
    {
        a=x/10+1;
    }
    if(y%10==0) 
    {
        b=y/10;
    }
    else 
    {
        b=y/10+1;
    }
    cout<<abs(a-b)<<endl;
}


int32_t main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}