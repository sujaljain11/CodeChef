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
    int n;int c=0;
    cin>>n;
    int a[n];
    rep(i,n) cin>>a[i];
    for(int i=0; i<n-1;i++) if(a[i+1]<a[i]) c++;
    if(c!=0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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