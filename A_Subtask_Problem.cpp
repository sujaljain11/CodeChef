#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while (t--)
    {
        int n,m,k,c=0,v=0;
        cin >> n >> m>> k;
        int A[n];
        for (int i=1; i<=n; i++)
        {
            cin >> A[i];
        }
        for (int j=1; j<=n; j++)
        {
            if(A[j]==1)c++;
        }
        if(c==n) cout << 100<< endl;
        else
        for(int q=1;q<=m;q++)
        {
            if(A[q]==0) break;
            v++;
        }
        if (v==m) cout << k<< endl;
        if(c!=n && v!=m) cout << 0<< endl;


    }
    return 0;
}
        
        
       