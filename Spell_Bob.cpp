#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   char a[3],b[3];int c=0;int flag=0;
	   scanf("%s",a);
	   scanf("%s",b);
	   for(int i=0;i<3;i++)
	   {
	       if(a[i]=='b'||b[i]=='b')
	       c++;
	   }
	   if(c==3)
	   {
	       for(int i=0;i<3;i++)
	       {
	           if(a[i]=='o'||b[i]=='o')
	           flag=1;
	       }
	   }
	   if(c==2)
	   {
	       for(int i=0;i<3;i++)
	       {
	           if(a[i]=='o'||b[i]=='o')
	           {if(a[i]!='b'&&b[i]!='b')
	           flag=1;}
	       }
	   }
	   
	   if(flag==1)
	   printf("yes\n");
	   else
	   printf("no\n");

	}
	return 0;
}

