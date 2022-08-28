#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int t;
    cin>> t;
    while (t--)
    {
        int a,b,c,d=0;
        string s,p;
        cin>>a>>p;
        for (int i=0; i<a; i++)
        {
            cin >> s;
            if (s=="CONTEST_WON")
            {
                cin >> b; 
                if(b<=20)
                {
                    d+=300+20-b; 
                }
                else d+=300; 
            }
            else if( s=="TOP_CONTRIBUTOR")
            {
                d+=300;
            }
            else if(s=="BUG_FOUND")
            {
                cin>> c; 
                d+=c; 
            }
            else if(s=="CONTEST_HOSTED")
            {
                d+=50;
            }
        }
        if(p=="INDIAN") cout << d/200<< endl;
        else cout << d/400<< endl;
    }
    return 0;
}