#include <stdio.h>
int main() {
    int d,n,i,j,sum=0;
	scanf("%d %d\n",&d,&n);
	int a[n];
	for(i=0;i<d;i++)
	    scanf("%d",&a[i]);
	  if(n<d)
	    printf("%d",a[n-1]);
	    if(n>=d)
	      {for(i=0;i<d;i++)
	          sum=sum+a[i];
	          int s=0;
	          for(j=1;j<=n-d;j++)
	       s=s+sum;
	    printf("%d",s);}
	return 0; }