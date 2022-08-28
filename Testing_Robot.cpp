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
    int n,x;
    string s;
    cin>> n>>x>>s;
    map<int,int> mp;
    mp.insert({x,1});
    rep(i,n)  
    {
        if(s[i]=='R')
        {
            x++;
            if(mp.find(x)==mp.end()) mp.insert({x,1});
        }
        else if(s[i]=='L') 
        {
            x--;
            if(mp.find(x)==mp.end()) mp.insert({x,1});
        }
    }
    cout << mp.size()<<endl;
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

   
    

