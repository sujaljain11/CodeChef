#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int a;
    cin>>a;
    
    int l[a];
    int r[a];
   int count = -1;
    for (int i = 1; i <=a; i++)
    {
              cin>>l[i];
    }
     for (int i = 1; i <=a; i++) 
     {
              cin>>r[i];
    }
    int k;
    int  h= 0;
    
    for (int i = 1; i <=a; i++) 
    {
        int p = r[i]*l[i];
       int g= r[i];
        if(p>count || g>h)
        {
           count = p;
             k = i;
             h = r[i];
        }
    }
    
    cout<<k<<endl;
}
    
	return 0;
}
