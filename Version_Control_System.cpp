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
}


int32_t main()
{
	fast
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		int A[m], B[k];
		cin >> n>>m>> k;
		for (int i=0; i<=m-1; i++) cin>> A[i];
		for (int i=0; i<=k-1; i++) cin>> B[i];

		solution();
	}
	return 0;
}