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
    int c=0;
    string x,y;
    cin >> x>>y;
    for (int i=0; i<x.length(); i++)
    {
        if(x[i]==y[i]) c++;
        else if((x[i]=='?' && y[i]!='?') || x[i]!='?' && y[i]=='?') c++;
        else c=0;
    }
    if ( c==x.length()) cout<< "YES"<< endl;
    else cout << "NO"<<endl;
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