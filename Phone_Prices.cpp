#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)
#define pii pair<int,int>
#define vi vector<int>
#define arr(n); ll ar[n]; for(int i=0;i<n;i++) cin>>ar[i];

using namespace std;

void solution()
{
    int n,ans=0;
    cin>>n;
    vector<int> a(n);
    rep(i,n)
    cin>>a[i];
    rep(i,n)
    {
        int k=a[i];int c=0;
        for(int j=0;j<5;j++)
        {
            if((i-j)>0) 
            {
                if(k<a[j])
                {
                    c++;
                    continue;
                }
                break;
            }
            else
            if(i<=5) 
            {
                if(c==i) ans++;
            }
            else 
            {
                if(c==5) ans++;
            }
        }
    }
    cout<<ans<<endl;
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