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
    cout<<endl;
    cout<<"NAME: Sujal Jain"<<endl;
    cout<<"BRANCH: Computer Science"<<endl;
    cout<<"ROLL NO: 21115102"<<endl;
    cout<<endl;
    rep(i,5)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=4; i>=0;i--)
    {
        for(int j=i;j>=0;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


int32_t main()
{
    fast
    int t;
t=1;    while(t--)
    {
        solution();
    }
    return 0;
}