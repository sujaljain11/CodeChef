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
#define arr(n); ll ar[n]; for(int i=0;i<n;i++) cin>>ar[i];

using namespace std;

void solution()
{
    int n,k,c;
    cin>>n;
    int a[n];
    vector<vector<int>> v;
    rep(i,n)
    {
        cin>>k;
        vector<int> vv;
        rep(i,k)
        {
            cin>>c;
            vv.push_back(c);   
        }
        v.push_back(vv);
    }
    rep(i,n)
    {
        rep(j,n)
        {
            set<int> s;
            for(auto& it: v[i]){
                s.insert(it);
            }
            for (auto& it: v[j]){
                s.insert(it);
            }
            if (s.size()==5){
                cout<<"YES"<<endl;
                return;
            }
        
        }
    }
    cout<<"NO"<<endl;
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