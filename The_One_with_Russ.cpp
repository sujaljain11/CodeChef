#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,k;
        cin >> n>>x>>k;
        int A[n], B[n];
        for (int i=0;i<=n-1; i++)
        {
            cin >> A[i]>> B[i];
        }
        int c=0;
        for (int i=0;i<=n-1; i++)
        {
            if(abs(A[i]-B[i]) <=k) c++;
        }
        if(c==x) cout << "YES"<< endl;
        else cout << "NO"<< endl;
    }
    return 0;
}
int abs(int v)
{
    int l=v;
    if(l==0) return 0;
    return l <0? -l:l;
}
        