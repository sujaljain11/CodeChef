#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)
#define pii pair<int,int>
#define vi vector<int>

using namespace std;

void solution()
{
    int a,b;
    cin>>a>>b;
    if(a%2!=0) 
    {
        if((b-a)<4)
        {
            cout<<-1<<endl;
            return;
        }
        cout<<a+1<<' '<<a+2<<' '<<a+3<<' '<<a+4<<endl;
    }
    else
    {
        cout<<a<<' '<<a+1<<' '<<a+2<<' '<<a+3<<endl;
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