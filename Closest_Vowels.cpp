#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x

using namespace std;

void solution()
{
    int n;int h=1;
    cin>>n;
    string s;
    vector<int>v;
    cin>>s;
    rep(i,n)
    {
        if(s[i]=='c' || s[i]=='g' || s[i]=='l' || s[i]=='r') 
        h=(h*2)%(ll)(1000000007);
    }
    cout<<h<<endl;
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