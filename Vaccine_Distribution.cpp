#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,d;
        cin >> n>>d;
        int A[n];
        for (int i=1; i<=n; i++)
        {
            cin>> A[i];
        }
        int k=n/d;
        if(n%d!=0) k++;
        cout << k<< endl;
    }
}


