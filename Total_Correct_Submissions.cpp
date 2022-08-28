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
    int n;
    cin>>n;
    map<string,int> mp;
    rep(i,3*n)
    {
        string s;int val;
        cin>>s>>val;
        mp[s]+=val;
    }
    vector<int> ans;
    for(auto it:mp)
    {
        ans.push_back(it.second);
    }
    sort(ans.begin(),ans.end());
    rep(i,ans.size())
    cout<<ans[i]<<" ";
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