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
    int n,x,y;
    cin>>n>>x>>y;
    int a[n];
    int m=0;int k=0;
    rep(i,n)     
    {
        cin>>a[i];
        m+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>y) a[i]=a[i]-y;
        else a[i]=0;
    }
    rep(i,n) k+=a[i];
    if(k+x<m) cout<<"COUPON"<<endl;
    else cout<<"NO COUPON"<<endl;

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