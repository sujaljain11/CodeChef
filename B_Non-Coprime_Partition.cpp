#include <bits/stdc++.h>

#define pi (3.141592653589)
#define pb push_back
#define pp pop_back
#define py cout<<"Yes"<<endl
#define pn cout<<"No"<<endl
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i:f)

const ll sz=1e6+1;
const ll mod=1e9+7;

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
    ll n;
    cin>>n;
    if(n==1) pn;
    else if(n==2) pn;
    else if(n==4) 
    {
        py;
        cout<<1<<" "<<2<<endl;
        cout<<3<<" "<<1<<" "<<3<<" "<<4<<endl;
    }
    else 
    {
        if(n%2==0) 
        {
            py;
            cout<<n/2<<" ";
            rep1(i,(n/2)+1) cout<<i<<" ";
            cout<<endl<<n/2<<" ";
            for(int j=n/2+1;j<=n;j++) cout<<j<<" ";
            cout<<endl;
        }
        else 
        {
            py;
            cout<<(n+1)/2<<" ";
            rep1(i,(n+1)/2+1) cout<<i<<" ";
            cout<<endl<<n-(n+1)/2<<" ";
            for(int j=(n+1)/2+1;j<=n;j++) cout<<j<<endl;
            cout<<endl;
        }
    }
    return 0;
}