#include <stdio.h>
int main() {
    int d,n,i;
	scanf("%d %d\n",&d,&n);
	int a[n];
	for(i=0;i<d;i++)
	    scanf("%d",&a[i]);
	  if(n<d)
	    printf("%d",a[n-1]);
	    if(n>=d)
	   { for(i=d;i<n;i++)
	     a[i]=2*a[i-1]-a[i-d-1];
	         printf("%d",a[i]); }
	return 0; }