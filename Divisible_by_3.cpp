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
    int a,b,x=0,y=0;
    cin>>a>>b;
    int k=a;
    if(a%3==0 || b%3==0) 
    {
        cout<<0<<endl;
        return;
    }
    while(a%3!=0 && x<=3)
    {
        a=abs(a-b);
        x++;
    }
    while(b%3!=0 && y<=3)
    {
        b=abs(k-b);
        y++;
    }
    cout<<min(x,y)<<endl;
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