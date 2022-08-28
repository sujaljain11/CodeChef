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
    string s;
    cin>>s;
    char ans[n/2];
    int k=0;
    for(int i=0; i<n;i+=2)
    {
        if(s[i]=='0' && s[i+1]=='0') ans[k]='A';
        else if(s[i]=='0' && s[i+1]=='1') ans[k]='T';
        else if(s[i]=='1' && s[i+1]=='0') ans[k]='C';
        else if(s[i]=='1' && s[i+1]=='1') ans[k]='G';
        k++;
    }
    rep(i,n/2) cout<<ans[i];
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