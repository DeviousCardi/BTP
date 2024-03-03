#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,count=0,sum=0 ;
	int a[n];
	 scanf("%d",&n);
    for(i=1;i<=n;i++)
     { scanf("%d",&a[i]);
	     for(j=i+1;j<=n;j++)
	       {   if(a[i]>a[j])
	          {count=count+1 ;} }
	    sum=sum+count ; }
	printf("%d",sum);
	for(i=1;i<=n;i++)
	{ for(j=i+1;j<=n;j++)
	 count=0 {
	       if(a[i]>a[j])
	    {count=count+1;
	    printf(" %d",count);} } }
	return 0; }