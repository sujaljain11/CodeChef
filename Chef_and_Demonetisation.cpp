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
    ll n,s,k=0; double p=0;
    cin >> s>> n;
    if(s<=n)
    {
        if(s==1) k=1;
        else
        {
            if(s%2==0) k=1;
            else k=2;
        }
    }
    else
    {
        ll div = s/n;
        s = s - (div*n);
        k+=div;
        if(s%2==1)
        k+=2;
        else
        k++;

        if(s==0)
        k--;
        if(s==1)
        k--;
        
    }
    cout << k<< endl;
}


int32_t main()
{
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}

    
