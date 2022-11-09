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
    ll a,b,c=0,d=0;
    cin>>a>>b;
    ll k=b/a;
    if(b%a==0 && k==1) 
    {
        cout<<0<<endl;
        return 0;
    }
    if(b%a!=0 || (k%2!=0 && k%3!=0)) 
    {
        cout<<-1<<endl;
        return 0;
    }
    while(k%2==0) 
    {
        c++;
        k=k/2;
    }
    while(k%3==0) 
    {
        d++;
        k=k/3;
    }
    if(k!=1) 
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<c+d<<endl;
    return 0;
}