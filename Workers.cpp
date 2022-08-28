#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c[n],u[n];
	for(int j=0;j<n;j++)
	cin>>c[j];
	for(int j=0;j<n;j++)
	cin>>u[j];
	long int mini1=100000,mini2=100000,mini3=100000;
	for(int i=0;i<n;i++)
	{
	     if(u[i]==1 && (mini1 > c[i]))
	     mini1=c[i];
	     
	     if(u[i]==2 && (mini2 > c[i]))
	     mini2=c[i];
	     
	     if(u[i]==3 && (mini3 > c[i]))
	     mini3= c[i];
	}
	if( (mini1+mini2) < mini3)
	cout<<(mini1 + mini2)<<endl;
	else cout<<mini3<<endl;
}
