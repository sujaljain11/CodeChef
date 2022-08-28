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
    int n;
    cin>>n;
    int a[n];
    map<int,int> mp;
    rep(i,n) 
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a,a+n);
    rep(i,n/2) 
    {
        if(a[i]==a[i+n/2])
        {
            cout<<"NO"<<endl;
            return;
        } 
    }    
    if(mp.size()==2) 
    {
        cout<<"NO"<<endl;
        return;
    }
    int b[n];
    if(n%2==0)
    {
        rep(i,n/2) 
        {
            b[i+n/2]=a[i];
            b[i]=a[i+n/2];
        }
    }
    else 
    {
        rep(i,n/2) 
        {
            b[i+n/2]=a[i];
            b[i]=a[i+n/2];
        }
        b[n/2]=a[n/2];
    }
    cout<<"YES"<<endl;
    rep(i,n) 
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    rep(i,n) 
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
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