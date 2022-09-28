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

void solution()
{
    ll n;
    vi a,b;
    cin>>n;
    if(n==2 || n==3) cout<<-1<<endl;
    else
    {
        if(n==4) 
        {
            cout<<"2 4 1 3"<<endl;
            return;
        }
        else if(n%2==0) 
        {
            rep1(i,(n/2)+1)
            {
                a.push_back(i);
            }
            for(int i=(n/2)+1;i<=n;i++)
            {
                b.push_back(i);
            }
            rep(i,n/2)
            {
                cout<<a[i]<<" "<<b[i]<<" ";
            }
            cout<<endl;
            return;
        }
        else
        {
            n=n+1;
            rep1(i,(n/2)+1)
            {
                a.push_back(i);
            }
            for(int i=(n/2)+1;i<=n;i++)
            {
                b.push_back(i);
            }
            rep(i,n/2)
            {
                if(i==(n/2)-1) 
                {
                    cout<<a[i];
                    cout<<endl;
                    return;
                }
                cout<<a[i]<<" "<<b[i]<<" ";
            }
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