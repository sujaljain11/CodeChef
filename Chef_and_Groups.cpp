#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    string b;
    cin>>b;
    int n,i,p=0;
    n=b.length();
    for(i=0;i<n-1;i++)
    {
        if(b[i]=='1' && b[i+1]=='0')
        {
            p++;
        }
    }
    if(b[n-1]=='1')
    {
        p++;
    }
    cout<<p<<endl;
}
return 0;
}