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
    int n;
    cin>>n;
    int k=n;
    int p=1,f=0;
    if(n%2==0) f=n/2;
    else f=n/2+1;
    int a[f],b[f];
    if(n%2==0) 
    {
        for(int i=0;i<f;i++)
        {
            a[i]=k;
            k--;
            b[i]=p;
            p++;
            cout<<a[i]<<' '<<b[i]<<' ';
        }
        cout<<endl;
        return;
    }
    else 
    {
        for(int i=0;i<f;i++)
        {
            a[i]=k;
            k--;
        }
        for(int i=0;i<f-1;i++)
        {
            b[i]=p;
            p++;
        }
        for(int i=0;i<f;i++)
        {
            cout<<a[i]<<' ';
            if(i==f-1) {cout<<endl;return;}
            else cout<<b[i]<<' ';
        }
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