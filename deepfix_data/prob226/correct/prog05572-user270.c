#include <stdio.h>
int main() {
	int d, n, flag=0;
	scanf("%d%d",&d,&n);
	int b[d],i, a[30];
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
	for (i=0; i<d;i++) {
	    a[i]=b[i]; }
    int sum1, sum2 ;
	     if ( n<=d) {
            	       for(i=n-d;i<=(n-2);i++)
            	       a[n-1]=a[i]+a[n-1];
            	       printf("%d ",a[n-1]); }
        else {
                for (i=0;i<d;i++) {
                    sum1=sum1+a[i];
                    printf("%d",sum1); }
                for(i=d;i<n;i++) {
                    sum2=2*a[i];
                    printf("%d",sum2); } }
	return 0; }