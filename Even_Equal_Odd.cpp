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
    int n;
    cin>>n;
    n*=2;
    int a[n];
    rep(i,n)
    cin>>a[i];
    int o=0,e=0;
    rep(i,n)
    {
        if(a[i]%2==1)
        o++;
        else
        e++;
    }
    if(o>=e)
    cout<<(o-e)/2<<endl;
    else
    {
        vi even;
        vi ans;
        rep(i,n)
        {
            if(a[i]%2==0)
            even.push_back(a[i]);
        }
        rep(i,even.size())
        {
            int cc=0;
            while(even[i]%2==0)
            {
                cc++;
                even[i]/=2;
            }
            ans.push_back(cc);
        }
        sort(ans.begin(),ans.end());
        ll sum=0;
        int index=0;
        rep(i,(e-o)/2)
        sum+=ans[index++];
        cout<<sum<<endl;
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