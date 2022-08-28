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
#define arr(n); ll ar[n]; for(int i=0;i<n;i++) cin>>ar[i];

using namespace std;

void solution()
{
    int n,m;
    cin>>n>>m;
    if(m>=n)
    {
        int x=1,d=1;
        for(int i=0; i<n;i++)
        {
            int k=x;
            for(int j=0;j<m;j++)
            {
                cout<<k<<' ';
                k=k+d;
            }
            d+=1;
            x+=n+1;
            cout<<endl;
        }
        return;
    }
    if(n>m)
    {
        int x=1,d=m+1;
        for(int i=0; i<n;i++)
        {
            int k=x;
            for(int j=0;j<m;j++)
            {
                cout<<k<<' ';
                k=k+d;
            }
            d+=1;
            x+=1;
            cout<<endl;
        }
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