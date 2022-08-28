
#include <bits/stdc++.h>
#include <unordered_map>

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
    set<string> s;
    rep(i,n) 
    {
        string p;
        cin>>p;
        s.insert(p);
    }
    int m;
    cin>>m;
    map<pair<string,string>,int> u;
    rep(i,m) 
    {
        string a,b; int d;
        cin>>a>>b>>d; 
        u[make_pair(a,b)]=d;
    }

    

    int t;
    cin>> t;
    while (t--)
    {
        bool flag=0;
        int k;
        int len=0;
        cin >> k;
        string o[k];
        unordered_map <string,int> pp;
        rep(i,k)
        {
            cin>>o[i];
        }
        rep(i,k){
            if(s.find(o[i])==s.end()) 
            {
                flag=1;
                break;
            }
            if(pp[o[i]]==0) pp[o[i]]++;
            else flag=1;
        }
        rep(i,k-1)
        {
            if(u[make_pair(o[i], o[i+1])]==0) {flag=1;break;}
            else  len+=u[make_pair(o[i], o[i+1])];
        }
        if(flag==1) cout<< "ERROR"<<endl;
        else cout<< len<<endl;
        
    }
}


int32_t main()
{
    fast
    int tt;
    tt=1;
    while(tt--)
    {
        solution();
    }
    return 0;
}