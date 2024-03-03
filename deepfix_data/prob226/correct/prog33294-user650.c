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
	    { a[i+1]=2*a[i]-a[i-d];}
	         printf("%d",a[i+1]); }
	return 0; }