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
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    rep(i,n-1)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
            break;
        }
    }
    if(is_sorted (a.begin(),a.end())) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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