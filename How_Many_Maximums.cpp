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
    int n,l=0,k=0;
    cin>>n;
    char a[n-1];
    rep(i,n-1) cin>>a[i];
    if(n==2)
    {
        cout<<1<<endl;
        return;
    }
    char ch=a[0];
    if(ch=='0')
    {
        rep(i,n-2)
        {
            if(a[i+1]!=a[i]) l++; 
        }
        if(l==1)
        {
            cout<<1<<endl;
            return;
        }
        else if(l%2==0)
        {
            cout<<l/2+1<<endl;
            return;
        }
        else if(l%2!=0)
        {
            cout<<(l+1)/2<<endl;
            return;
        }
    }
    else
    {
         rep(i,n-2)
        {
            if(a[i+1]!=a[i]) k++; 
        }
        if(k==1) 
        {
            cout<<2<<endl;
            return;
        }
        else if(k%2!=0) 
        {
            cout<<(k/2)+2<<endl;
            return;
        }
        else if(k%2==0)
        { 
            cout<<(k/2)+1<<endl;
            return;   
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