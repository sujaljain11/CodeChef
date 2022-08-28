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
    int n,k;
    cin >> n>>k;
    int a[n];
    rep(i,n) cin>> a[i];
    vector <int> m,t; 
    rep(i,n) 
    {
        if(i%2==0) m.push_back(a[i]) ;
        else t.push_back(a[i]) ;
    }
    sort(m.begin(),m.end(), greater<int>());
    sort(t.begin(),t.end());
    rep(i,k)
    {
        if(m[i]>t[i]) swap(m[i],t[i]);
        else break;
    }
    int s=0, p=0;
    rep(i,m.size()) s+=m[i];
    rep(i,t.size()) p+=t[i];
    if(s<p) cout<< "YES"<< endl;
    else cout<< "NO"<< endl;
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