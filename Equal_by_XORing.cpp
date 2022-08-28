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
    ll a,b,n,i;
    cin>>a>>b>>n;
    if(a==b) 
    {
        cout<<0<<endl;
        return;
    }
    if(n==1)
    {
        cout<<-1<<endl;
        return;
    }
    if(n==2)
    {
        if(abs(a-b)==1)
        {
            cout<<1<<endl;
            return;
        }
        else 
        {
            cout<<-1<<endl;
            return;
        }
    }

    int x[INT_MAX],y[INT_MAX];
    for(i=0;a>0 || b>0;i++)
    {
        x[i]=a%2;
        a=a/2;
        y[i]=b%2;
        b=b/2;
    }
    int s=0,ans=0;int k=0,p=0;
    int z[INT_MAX];
    for(int j=i;j>=0;j--)
    {
        if(x[j]!=y[j]) z[p]=k;
        p++;
        k++;
    }
    for(int i=0;i<sizeof(z)/sizeof(z[0]);i++)
    {
        s+=pow(2,z[i]);
        if(s>n)
        {
            ans++;
            s=0;
        }
    }
    cout<<ans<<endl;
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