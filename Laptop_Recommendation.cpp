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
    int a[n];
    rep(i,n)
    cin>>a[i];

    map<int,int> mp;
    rep(i,n)
    {
        mp[a[i]]++;
    }
    int ans=-1;int ansf=-1;
    for(auto it:mp)
    {
        if(it.second>ansf)
        {
            ansf=it.second;
            ans=it.first;
        }
    }
    int count=0;
    for(auto it:mp)
    {
        if(it.second==ansf)
        count++;
    }
    if(count>1)
    cout<<"CONFUSED"<<endl;
    else
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