#include<iostream>
using namespace std;
int main()
{
    int t,i,n,final_answer,a,b;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n==2||n==3)
        cout<<"3"<<endl;
        else 
        {
            if(n%2!=0)
            {
                a=n-1;
                b=a/2;
                final_answer=(a*3)-(b*3);
                cout<<final_answer<<endl;
            }
            else 
            {
                b=n/2;
                final_answer=((n-1)*3)-((b-1)*3);
                cout<<final_answer<<endl;
            }
        }
    }
}