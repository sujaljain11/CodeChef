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
    int x,y;
    cin>>x>>y;
    if(x==y) cout<<0<<endl;
    else if(x>y)
    {
        if((x-y)%2==0) cout<<(x-y)/2<<endl;
        else cout<<(x-y)/2+2<<endl;;
    }
    else if(x<y)
    {
        cout<<y-x<<endl;
    }
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