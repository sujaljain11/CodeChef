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
    int n,a,b,ans=0;
    cin>>n>>a>>b;
    int x=0,y=0;
    for(int i=n-1;i>=0;i--)
    {
        int p=1<<i;
        if((p&a)!=0)x++; 
        if((p&b)!=0)y++; 
    }
    int t=x+y;
    if((x+y)<=n)
    {
        for(int i=n-1;i>=0&& (t)!=0;i--)
        {
            ans+=pow(2,i);
            t--;
        }
        cout<<ans<<endl;
        return;
    }
    else 
    {
        int k=(x+y)-n;
        for(int i=n-1;i>=(x+y)-n;i--)
        {
            ans+=pow(2,i);
        }
        cout<<ans<<endl;
        return;
    }
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