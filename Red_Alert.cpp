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
    int n,d,h;int c=0;int flag=0;
    cin >> n>> d>> h;
    int a[n];
    rep(i,n) cin >> a[i];
    rep(i,n) 
    {
        if(a[i]>0) c+=a[i];
        else 
        {
            c-=d;
            if(c<0) c=0;
        }
        if(c>h) 
        {
            flag=1; break; 
        }
    }
    if(flag==1) cout << "yes" << endl;
    else cout << "no" << endl;
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