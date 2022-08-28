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
    int n;
    cin>>n;
    char c[n];
    if(n%2==0) 
    {
        c[0]='1';
        c[n-1]='1';
        for(int i=1;i<n-1;i++)
        {
            c[i]='0';
        }
    }
    else 
    {
        for(int i=0;i<n;i++)
        {
            if(i%2==0) 
            c[i]='0';
            else c[i]='1';
        }
    }
    rep(i,n) 
    {
        cout<<c[i];
    }
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