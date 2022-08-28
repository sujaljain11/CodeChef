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
    cin>> n;
    int a[n][n];
    int p=1,m=n*n;
    for (int i=0; i<n; i++)
    {
        for(int j=0,k=i;j+k==i && j<=i && j>=0 &&k>=0; j++,k--)
        {
            a[j][k]=p++;
            a[n-1-j][n-1-k]=m--;
        }
    }
    for(int i=0;i<n; i++)
    {
        for (int j=0; j<n; j++)
        cout<< a[i][j]<< " ";
        cout<< endl;
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
        