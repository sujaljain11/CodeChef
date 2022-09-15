#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,z;
        cin >>x>>y>>z;
        if(z-x-y>=0) cout << 2<< endl;
        else if(z-x>=0) cout << 1<< endl;
        else cout << 0<< endl;
    }
    return 0;
}