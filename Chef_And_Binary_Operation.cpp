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
#define arr(n); ll ar[n]; for(int i=0;i<n;i++) cin>>ar[i];

using namespace std;

void solution()
{
    string a,b;int x=0,y=0,m=0,n=0;
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]!=b[i]) 
        {
            if(a[i]=='1') x++;
            else y++;
        }
        if(a[i]==b[i]) 
        {
            if(a[i]=='1') m++;
            else n++;
        }
    }
    if((x+m)==0 || (y+n)==0)
    {
        cout<<"Unlucky Chef"<<endl;
        return;
    }
    cout<<"Lucky Chef"<<endl;
    cout<<max(x,y)<<endl;
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