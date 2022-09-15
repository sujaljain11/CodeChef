#include <iostream>
using namespace std;
int main()
{
    int t;
     cin>> t;
     while (t--)
     {
         int x,y,z;
         cin >> x>> y>> z;
         int a=z-y;
         int b=a/x;
         cout << b<< endl;
     }
}