#include <bits/stdc++.h>

#define pi (3.141592653589)
#define pb push_back
#define pp pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
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

#define vlli(v,n) vector<ll> v(n); rep(i,n) cin>>v[i];

const ll sz=1e6+1;
const ll mod=1e9+7;

using namespace std;

typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<ll,ll> mp;
typedef unordered_map<ll,ll> ump;
typedef set<ll> seti;
typedef multiset<ll> mset;
typedef multiset<pii> mpi;

void solution()
{
    ll n,a=1,b=0,c=0,d=0,k=2,i=0;
    cin>>n;
    n--;
    while(n>k)
    {
        if(i==0 || i==1) 
        {
            // b+=k;
            // n-=k++;
            // i++;
            if(i==0) 
            {
                c+=k/2;
                d+=k/2;
                n-=k++;
                i++;
            }
            else 
            {
                c+=k/2;
                d+=(k/2)+1;
                n-=k++;
                i++;
            }
        }
        else 
        {
            // a+=k;
            // n-=k++;
            // i++;
            // if(i==4) i=0;
            if(i==2) 
            {
                a+=k/2;
                b+=k/2;
                n-=k++;
                i++;
            }
            if(i==3) 
            {
                a+=(k/2)+1;
                b+=k/2;
                n-=k++;
                i++;
                if(i==4) i=0;
            }
        }
    }
    if(i==0 || i==1) 
    {
        if(n%2==0) 
        {
            c+=n/2;
            d+=n/2;
        }
        else 
        {
            c+=n/2;
            d+=(n/2)+1;
        }
    }
    else 
    {
        if(n%2==0) 
        {
            c+=n/2;
            d+=n/2;
        }
        else 
        {
            c+=n/2+1;
            d+=n/2;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
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