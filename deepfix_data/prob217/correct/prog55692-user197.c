#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,count=0;
	scanf("%d\n",&n);
	int a[n];
	int s;
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	scanf("\n%d",&s);
	for (i=0;i<(n-1);i++) {
	        for(j=i+1;j<n;j++) {
	                if(a[i]==a[j])
	                {printf("(%d,%d)\n",a[i],a[j]);}
	                count=count+1; }
	       if (count==0)
	       printf("no output"); }
	return 0; }