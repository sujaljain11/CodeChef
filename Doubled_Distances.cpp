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
    int n;
    int c=0;
    cin>>n;
    int a[n];
    rep(i,n) cin>>a[i];
    sort(a,a+n);
    for(int i=2; i<n-1; i++)
    {
       if((2*(a[i]-a[i-1])==a[i+1]-a[i]) || (a[i]-a[i-1]==2*(a[i+1]-a[i])))
       continue;
       else {
           cout<<"NO"<<endl;
           return;
       }
    }
    cout<<"YES"<<endl;
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