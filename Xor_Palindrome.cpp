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
  int n;
  string s;
  cin>>n>>s;
  int z=count(s.begin(),s.end(),'0');
  int k=n-z;
  if(k&1)
  {
    if(k==z) cout<<"YES"<<endl;
    else if(z%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  else cout<<"YES"<<endl;
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