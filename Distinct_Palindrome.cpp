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
    int n,x;
    cin>>n>>x;
    string s;
    int z=97;
    if(n%2!=0 && x>n/2+1) 
    {
        cout<<-1<<endl;
        return;
    }
    else if(n%2==0 && x>n/2) 
    {
        cout<<-1<<endl;
        return;
    }
    int h=0;
    if(n%2==0) h=n/2;
    else h=n/2+1;
    for(int i=0;i<h;i++)
    {
        if(x>0)
        {
        s+=char(z);
        z++;
        x--;
        if(x==0)
        z--;
        continue;
        }
        
        s+=char(z);
        
    }
    string o=s;
    if(n%2==0) 
    {
        cout<<o;
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }   
    else 
    {
        cout<<o;
        int g=s.length();
        for(int i=g-2;i>=0;i--)
        cout<<o[i];
        cout<<endl;

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