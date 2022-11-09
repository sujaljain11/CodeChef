#include <bits/stdc++.h>

#define pi (3.141592653589)
#define pb push_back
#define pp pop_back
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i:f)

using namespace std;

typedef pair<long long int, long long int> pii;
typedef vector<long long int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<long long int,long long int> mp;
typedef unordered_map<long long int,long long int> ump;
typedef set<long long int> seti;
typedef multiset<long long int> mset;

void solution()
{
    
}


int32_t main()
{
    fast
    ll n,x,y;
    cin>>n>>x>>y;
    bool flag1=false,flag2=false;
    vi v(n);
    rep(i,n) cin>>v[i];
    for(ll i=0;i<x;i++)
    {
        flag1=false;
        flag2=false;
        for(ll j=i+1;j<=i+y;j++)
        {
            if(v[i]<v[j]) continue;
            else 
            {
                flag1=true;
                break;
            }
        }
        if(i==0 && flag1==false) 
        {
            cout<<1<<endl;
            return 0;
        }
        if(i>0)
        {
            for(ll k=0;k<i;k++)
            {
                if(v[i]<v[k]) continue;
                else 
                {
                    flag2=true;
                    break;
                }
            }
        }
        if(flag1==false && flag2==false) 
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    flag1=false,flag2=false;
    for(ll i=x;i<n-y;i++)
    {
        for(ll j=i-x;j<i;j++)
        {
            if(v[i]<v[j]) continue;
            else
            {
                flag1=true;
                break;
            }
        }
        for(ll j=i+y;j>i;j--)
        {
            if(v[i]<v[j]) continue;
            else 
            {
                flag2=true;
                break;
            }
        }
        if(flag1==false && flag2==false)
        {
            cout<<i+1<<endl;
            return 0;
        }
        else 
        {
            flag1=false;
            flag2=false;
        }
    }
    for(ll i=n-y;i<=n-1;i++)
    {
        flag1=false;
        flag2=false;
        ll k=i-x;
        if(k>0)
        for(ll j=i-x;j<i;j++)
        {
            if(v[i]<v[j]) continue;
            else
            {
                flag1=true;
                break;
            }
        }
        else 
        {
            for(ll j=0;j<i;j++)
            {
                if(v[i]<v[j]) continue;
                else
                {
                    flag1=true;
                    break;
                }
            }
        }
        if(i==n-1 && flag1==false) 
        {
            cout<<i+1<<endl;
            return 0;
        }
        if(i!=n-1) 
        {
            for(ll j=i+1;j<=n-1;j++)
            {
                if(v[i]<v[j]) continue;
                else 
                {
                    flag2=true;
                    break;
                }
            }
        }
        if(flag1==false && flag2==false) 
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}