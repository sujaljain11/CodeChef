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
    string s;
    cin>>s;
    map<char,int> m,n;
    int k=s.length()/2;
    int h=s.length();
    int p=s.length()-1;
    rep(i,k) 
    {
        m[s[i]]++;
    }
    if(s.length()%2==0) k--;
    for(int i=h-1; i>k; i--)
    {
        n[s[i]]++;
    }
    if(m==n) cout<< "YES" << endl;
    else cout<< "NO" << endl;
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