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
    int a,b,c,d;
    cin>> a>>b>>c>>d;
    if(a==b && b==c && c==d) cout<<0<<endl;
    else if (a==b && b==c || b==c && c==d || c==d && d==a || a==b && b==d) cout<<1<<endl;
    else cout<< 2<<endl;
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

    
