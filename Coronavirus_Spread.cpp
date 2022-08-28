#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max=1;
        cin >>n;
        int min=n;
        int X[n];
        for (int i=0; i<n; i++) cin >> X[i];
        for(int j=0; j<n; j++)
        {
            int corona=1;
            for (int i=j; i<=n-2; i++)
            {
                if(X[i+1]-X[i]<=2) corona++;
                else break;
            }
            for (int i=j; i>0; i--)
            {
                if(X[i]-X[i-1]<=2) corona++;
                else break;
            }
            if(max<corona) max=corona;
            if(min>corona) min=corona;
        }
        cout <<min << ' '<< max<< endl;

    }
    return 0;
}
            
            

            
