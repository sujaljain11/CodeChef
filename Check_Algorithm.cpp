#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define rep(i,n) for(int i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x

using namespace std;

void solution()
{
    string s,ans;
    cin>> s;ll c=1;
    ll n=s.length();
    char ch=s[0];
    rep(i,n)
    {
        if(ch==s[i]) c++;
        else 
        {
            ans+=s[i-1];
            ans+=to_string(c); 
            c=1;
            ch=s[i];
        }
    }
    ans+=s[n-1];
    ans+=to_string(c);
    ll k=ans.length();
    if(k<n) cout << "YES"<< endl;
    else cout << "NO" << endl;
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