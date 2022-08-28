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
    int n;int ans=INT_MAX;int j=0;
    cin>>n;
    vector<int> v(n);
    rep(i,n) cin>>v[i];
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        mp[v[i]]++;
        while (mp[v[i]]>1)
        {
            mp[v[j]]--;
            j++;
        }
        ans=min(ans,2*min(j,n-i-1)+max(j,n-i-1));
    }
    cout<<ans<<endl;
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