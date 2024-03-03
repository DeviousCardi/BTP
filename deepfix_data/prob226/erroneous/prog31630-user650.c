#include <stdio.h>
int main() {
    int d,n,i,j,x=0,sum=0;
	scanf("%d %d\n",&d,&n);
	int a[n];
	for(i=0;i<d;i++)
	    scanf("%d",&a[i]);
	  if(n<d)
	    printf("%d",a[n-1]);
	    if(n>=d)
	      {for(i=0;i<d;i++)
	          sum=sum+a[i];
	          for(j=0;j<n-d;j++)
	         x=x+sum}
	        printf("%d"x);
	return 0; }