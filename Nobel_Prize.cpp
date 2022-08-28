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
    int n,m;int k;int l=0;
    cin>> n>> m;
    map< int ,int> mp;
    rep(i,m)
    {
        mp[i+1];
    }
    rep(i,n)
    {
        cin>>k;
        mp[k]++;
    }
    map<int,int> :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second==0) l++;
    }
    if(l>0) cout << "Yes"<< endl;
    else cout << "No" << endl;
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