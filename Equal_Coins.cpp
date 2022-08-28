#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x>>y;
        int sum= x+2*y;
        if(sum%2!=0) cout << "NO"<< endl;
        else if(x==0 && y%2!=0) cout << "NO"<< endl;
        else if(y==0 && x%2!=0) cout << "NO"<< endl;
        else cout<< "YES"<< endl;

    }
    return 0;
}
