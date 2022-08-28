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
    ll n;
    cin>>n;
    if(n==2)
    {
        cout<<-1<<endl;
        return;
    }
    if(n==3)
    {
        cout<<1<<' '<<2<<' '<<3<<endl;
        return;
    }
    if(n==4)
    {
        cout<<3<<' '<<2<<' '<<4<<' '<<1<<endl;
        return;
    }
    if(n%2!=0)
    {
        int k=1;
        rep(i,n)
        {
            cout<<k<<' ';
            k++;
        }
        cout<<endl;
        return;
    }
    ll a[n];
    a[0]=n-1;
    a[n-1]=1;
    a[n-2]=n-2;
    a[n-3]=n;
    int k=2;
    for(int i=1;i<=n-4;i++)
    {
        a[i]=k;
        k++;
    }
    rep(i,n)
    cout<<a[i]<<' ';
    cout<<endl;
    
    
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