#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	while(n)
	{
	    n--;
	    int x;
	    cin>>x;
	    string arr[x];
	    
	    for(int i=0; i<x; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    int cw=0,e=0,s=0,em=0,m=0,mh=0,h=0;
	    
	    for(int j=0; j<x; j++)
	    {
	        if(arr[j]=="cakewalk")
	        {
	            cw++;
	        }
	        if(arr[j]=="easy")
	        {
	            e++;
	        }
	        if(arr[j]=="simple")
	        {
	            s++;
	        }
	        if(arr[j]=="easy-medium")
	        {
	            em++;
	        }
	        if(arr[j]=="medium")
	        {
	            m++;
	        }
	        if(arr[j]=="medium-hard")
	        {
	            mh++;
	        }
	        if(arr[j]=="hard")
	        {
	            h++;
	        }
	        
	    }
	    
	    if(cw && e && s && (em||m) && (mh||h))
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
	
