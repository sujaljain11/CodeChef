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
    int n, m;
    cin >> n >> m;
    
    vector<pair<int,int>> a(n), b(m);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    for(int j = 0; j<m; j++)
    {
        cin >> b[j].first; 
        b[j].second = j;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int j = 0; j<m; j++)
    {
        cout << a[0].second << " " << b[j].second << endl;
    }
    for(int i = 1; i<n; i++)
    {
        cout << a[i].second << " " << b[m-1].second << endl;
    }
}


int32_t main()
{
    fast
    int t;
    t=1;
    while(t--)
    {
        solution();
    }
    return 0;
}