#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x

using namespace std;

void solution()
{
    int n;
    cin>>n;
    if(n==1) 
    {
        cout<<0<<endl;
    }
    else
    {
        n=n-1;
        int k=(n/5) * 2;
        n=n%5;
        if(n==0) {}
        if((n==1) || (n==2) || (n==3)) k++;
        else if(n==4) k+=2;
        cout<<k<<endl;
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