#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k,a[100],b[100],c[100]={},ans1=0,ans2=0;
	    cin>>n>>m>>k;
	    for(int i=0;i<m;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<k;i++){
	        cin>>b[i];
	    }
	    for(int i=1,j=0,x=0;i<=n;i++){
	        if(j<m && a[j] == i){c[i-1]++;j++;}
	        else{c[i-1]+=5;}
	        if(x<k && b[x] == i){c[i-1]++;x++;}
	        else {c[i-1]+=5;}
	        
	    }
	    
	    for(int i=0;i<n;i++){
	        if(c[i]==2){ans1++;}
	        if(c[i]==10){ans2++;}
	    }
	    
	    cout<<ans1<<" "<<ans2<<endl;
	}
	return 0;
}
