#include <iostream>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n;int c=0,d=0,e=0;
        cin>> n;
        int a[n];
        for (int i=0; i<=n-1; i++)
        {
            cin >> a[i];
        }
        for (int j=1; j<=10; j++)
        {
            for (int i=0; i<=n-1; i++)
            {
                if( a[i]==j) c++;
            }
                if(d<c) d=c; 
                else if(d==c && e<d)
                {
                    e=d;
                }
        }
        if(e!=0) cout << "confused"<< endl;
        else cout << d<< endl;
    }
    return 0;
}
                