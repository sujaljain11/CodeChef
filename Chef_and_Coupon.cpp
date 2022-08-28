#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d,c,fa;
        cin >> d>>c; 
        int a1,a2,a3,b1,b2,b3;
        cin >>a1>>a2>>a3;
        cin >> b1>>b2>>b3;
        int sum1=a1+a2+a3;
        int sum2=b1+b2+b3;
        int tdel=2*d;
        int coup1=c;
        if(sum1>=150) coup1+=0;
        else coup1+=d;
        if(sum2>=150) coup1+=0;
        else coup1+=d; 
        if(coup1>tdel) cout << "NO" << endl;
        else cout << "YES"<< endl;
    }
    return 0;
}

        

         
        

