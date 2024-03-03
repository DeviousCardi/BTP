#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	int a[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{scanf("%d\t",&a[i]);
	}m[0]=a[0];
	for(j=1;j<n;j++)
	{if(a[j]==a[j+1]||a[j]=a[j-1])
	  {m[j-1]=a[j];
	    }for(i=0;i<n-1;i++)
	       { if(m[j]==m[j+1])
	        {s=m[j];}
	    else
	        continue;
	   } printf("%d",s);
	return 0; }