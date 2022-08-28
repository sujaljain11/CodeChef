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
int gcd(int a,int b)
{
    if(a==0) return b;
    else return gcd(b%a,a);
}
void solution()
{   
    int n;
    cin>>n;
    vi v(n);
    int ans=0;
    for(auto &x : v)
    {
        cin>>x;
    }   
    int m = v[0];
    for (int i = 1; i < n; i++)
    {
        m = gcd(m, v[i]);
    }
    if(m!=1) {
        cout<<n<<endl;
        return;
    }

    int a=v[0];
    vi v1;
    vi v2;
    v1.push_back(a);
    rep1(i,n)
    {
        a=gcd(a,v[i]);
        v1.push_back(a);
    }
    a=v[n-1];
    v2.push_back(v[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        a=gcd(a,v[i]);
        v2.push_back(a);
    }
    reverse(v2.begin(),v2.end());
    rep1(i,n-1)
    {
        if(gcd(v1[i-1],v2[i+1])!=1) ans++;
    }
    if(v2[1]!=1) ans++;
    if(v1[n-2]!=1) ans++;
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