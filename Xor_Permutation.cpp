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
    if(n==3) 
    {
        cout<<-1<<endl;
        return;
    }
    if(n==4) {cout<<1<<" 2"<<" 4"<<" 3"<<endl;return;}
    if(n==5) { cout<<1<<" 2"<<" 4"<<" 3"<<" 5"<<endl;return;}
    else 
    {
        int f=n-4;
        if(n%2==0)
        {
            int k=n;
            rep(i,f/2)
            {
                cout<<k<<' ';
                k-=2;
            }
            cout<<1<<" 2"<<" 4"<<" 3 ";
            int h=5;
            rep(i,f/2)
            {
                cout<<h<<' ';
                h+=2;
            }
            cout<<endl;
        }
        else 
        {   
            int k=n-1;
            rep(i,f/2)
            {
                cout<<k<<' ';
                k-=2;
            }
            cout<<1<<" 2"<<" 4"<<" 3 ";
            int h=5;
            rep(i,f/2+1)
            {
                cout<<h<<' ';
                h+=2;
            }
            cout<<endl;
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