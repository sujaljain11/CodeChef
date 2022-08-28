#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,a,b,c,r;
        cin >> n;
        if(a>b) r=b;
        else if (a<b) r=a+min(b-a,c);
        if(r>=n) cout<< "YES";
        else cout<<"NO";

    }
    return 0;
}