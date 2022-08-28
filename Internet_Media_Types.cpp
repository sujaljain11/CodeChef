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
    int n,q;
    cin>>n>>q;
    string a,b; 
    map<string ,string> m;
    rep(i,n)
    {
        cin>> a>>b; 
        m[a]=b;
    }
    string c; 
    vector <string> v;
    int f=0,g=0;
    rep(i,q)
    {
        cin>>c;
        rep(i,c.length()-1)
        {
            if(c[i]=='.') 
            {
                f=i;
                g++;
            }
        }
        if(g==0) v.push_back("unknown");
        else 
        {
            string d=c.substr(f+1,c.length()-1);
            if(m.find(d)==m.end()) v.push_back("unknown");
            else v.push_back(m[d]);
        }
        f=0;g=0;
    }
    vector<string> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<< *it<< endl;
    }
}


int32_t main()
{
    fast
    int t;
    t=1;
    while(t--)
    {
        solution();
    }
    return 0;
}