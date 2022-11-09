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
    string s;
    cin>>s;
    string x=s;
    bool flag=false,flag1=false;
    rep(i,s.size()) 
    {
        if(isupper(s[i])) continue;
        else 
        {
            flag=true;
            break;
        }
    }
    if(flag==false) 
    {
        rep(i,s.size())
        {
            s[i]=s[i]+32;
            cout<<s[i];
        }
        cout<<endl;
        return 0;
    }
    if(islower(x[0])) flag1=true;
    if(flag1==true)
    {
        rep1(i,x.size())
        {
            if(isupper(x[i])) continue;
            else flag1=false;
        }
    }
    if(flag1) 
    {
        cout<<char(toupper(x[0]));
        rep1(i,x.size())
        {
            x[i]=x[i]+32;
            cout<<x[i];
        }
        cout<<endl;
        return 0;
    }
    else cout<<x<<endl;
    return 0;
}