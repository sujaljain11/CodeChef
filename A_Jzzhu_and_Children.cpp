// #include <bits/stdc++.h>

// #define pi (3.141592653589)
// #define pb push_back
// #define pp pop_back
// #define py cout<<"YES"<<endl
// #define pn cout<<"NO"<<endl
// #define ll long long int
// #define rrep(i, n) for(ll i=n-1;i>=0;i--)
// #define lp(i,a,b) for(ll i=a;i<b;i++)
// #define rep(i,n) for(ll i=0;i<n;i++)
// #define rep1(i,n) for(ll i=1;i<n;i++)
// #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// #define ps(x,y) fixed<<setprecision(y)<<x
// #define it(i,f) for(auto i:f)

// #define vlli(v,n) vector<ll> v(n); rep(i,n) cin>>v[i];

// const ll sz=1e6+1;
// const ll mod=1e9+7;

// using namespace std;

// typedef pair<long long int, long long int> pii;
// typedef vector<long long int> vi;
// typedef vector<string> vs;
// typedef vector<pii> vii;
// typedef vector<vi> vvi;
// typedef map<long long int,long long int> mp;
// typedef unordered_map<long long int,long long int> ump;
// typedef set<long long int> seti;
// typedef multiset<long long int> mset;

// void solution()
// {
//     ll n,m,x;
//     cin>>n>>m;
//     map<ll,vi> p;
//     vi v(n);
//     rep(i,n)
//     {
//         cin>>v[i];
//         p[v[i]].pb(i+1);
//     }
//     // it(i,p) 
//     // {
//     //     cout<<i.first<<" ";
//     //     it(j,i.second)
//     //     {
//     //         cout<<j<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     it(i,p)
//     {
//         cout<<"HI"<<endl;
//         if(p.size()==1) 
//         {
//             cout<<p[i.first].end()-p[i.first].begin()<<endl;
//         }
//         if(i.first<=m) p.erase(p.find(i.first));
        
//         // else 
//         // {
//         //     auto node=p.extract(i.first);
//         //     node.key()=i.first-m;
//         //     p.insert(move(node));
//         // }
//     }
//     it(i,p) 
//     {
//         cout<<i.first<<" ";
//         it(j,i.second)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


// int32_t main()
// {
//     fast
//     int t=1;
//     while(t--)
//     {
//         solution();
//     }
//     return 0;
// }


// code starts from here

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

#define vlli(v,n) vector<ll> v(n); rep(i,n) cin>>v[i];

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
    double n,m;
    cin>>n>>m;
    vi v(n);
    rep(i,n) 
    {
        cin>>v[i];
        if(v[i]<=m) v[i]=0;
    }
    double x=0;ll ans=0;
    rep(i,n)
    {  
        if(ceil(v[i]/m)>=x) 
        {
            x=ceil(v[i]/m);
            ans=i+1;
        }
    }
    cout<<ans<<endl;
}


int32_t main()
{
    fast
    int t=1;
    while(t--)
    {
        solution();
    }
    return 0;
}