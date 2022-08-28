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
    vector<int> v;
    if(n>=3)
    {  
        rep(i,n)
        {
            int b;
            cin>>b; 
            v.push_back(b);
        }
        map<int,int> mp;
        rep(i,n)
        {
            mp[v[i]]++;
        }
        if(mp.size()==1)
        cout<<0<<endl;
        else
        {
            int f=0;
        map<int,int> :: iterator it;
        for(it=mp.begin(); it!=mp.end(); it++) 
        {
            if(it->second>f) 
            f=it->second;
        }
        if (f==1) cout<<n-2<<endl; 
        else
        cout<<n-f<<endl;
        }
        
    }
    else 
    {
        int bb;
        rep(i,n) cin>>bb; 
        cout<<0<<endl;
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




        
