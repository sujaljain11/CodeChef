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
    int a,b,c;
    cin>>a>>b>>c;
    if(b<=a and b<=c)
    {
        cout<<a+c<<endl;
    }
        else if(a<=b and a<=c)
        {
            cout<<b+c<<endl;
        }
        else
        {
            cout<<a+b<<endl;
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