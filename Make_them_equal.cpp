#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x

using namespace std;
int getmax(int arr[], int n)
{
    int res= arr[0];
    rep(i,n) res=max(res,arr[i]);
    return res; 
}

int getmin(int arr[], int n)
{
    int res=arr[0];
    rep(i,n) res=min(res, arr[i]);
    return res;
}
void solution()
{
    int n;
    cin>> n;
    int arr[n]; 
    rep(i,n) cin>> arr[i];
    int l= getmax(arr,n);
    int s=getmin(arr,n);
    cout<< l-s<<endl;
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