#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a=0,b=0,c=0;
        int x,y;
        cin >>x>>y;
        char ch[30];
       for (int i=0; i<=29; i++)
       {
           cin >> ch[i];
           if (ch[i]=='1')
           {
               a++;
               b++;
               if(c<b) c=b; 
           } 
           else 
           {
               b=0;
           }
       }
       int salary=a*x + c*y;
       cout << a*x + c*y<< endl;
    }
    return 0;
}

               
