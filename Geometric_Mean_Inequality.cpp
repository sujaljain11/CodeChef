#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)
#define pii pair<int,int>
#define vi vector<int>

using namespace std;

void solution()
{
    int n,a=0,b=0;
    cin>>n;
    int m[n];
    rep(i,n) cin>>m[i];
    rep(i,n) 
    {
        if(m[i]==1) a++;
        else b++;
    }
    if(n%2!=0 && a-b==1 || b-a==1) cout<<"Yes"<<endl;
    else if(n%2==0 && a-b==2 || b-a==2 || a==b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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