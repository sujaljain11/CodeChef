#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)
#define pii pair<int,int>
#define vi vector<int>
using namespace std;


int smallest(int x, int y, int z) {

  int sm = 99999;

  if (x < sm)
    sm=x;
  if (y < sm)
    sm=y;
  if(z < sm)
    sm=z;

  return sm;
}
int largest(int x, int y, int z) {

  int lg = -1;

  if (x >lg)
    lg=x;
  if (y >lg)
    lg=y;
  if(z >lg)
    lg=z;

  return lg;
}
void solution()
{
    
    int x,y,z,ans=0;
    cin>>x>>y>>z;
    if(x>0) 
    {
        x--;
        ans++;
    }
    if(y>0) 
    {
        y--;
        ans++;
    }
    if(z>0) 
    {
        z--;
        ans++;
    }
    int a=smallest(x,y,z);
    int c=largest(x,y,z);
    int b=(x+y+z)-(a+c);
    if(a!=0 && c!=0) 
    {
        ans++;
        a--;
        c--;
    }
    if(b!=0 && c!=0) 
    {
        ans++;
        b--;
        c--;
    }
    if(a!=0 && b!=0) 
    {
        ans++;
        a--;
        b--;
    }
    cout<<ans<<endl;
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