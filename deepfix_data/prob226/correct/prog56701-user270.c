#include <stdio.h>
int main(void) {
	int d, n;
	scanf("%d%d",&d,&n);
	int a[30];
	int b[d],i, sum, j;
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
	printf("\n");
	for(i=0;i<d;i++) {
	    a[i]=b[i]; }
	for (i=d;i<30;i++) {
	    for (j=i-d, sum=0;j<i;j++) {
	        sum=sum+a[j]; }
	    a[i]=sum; }
	printf("\n");
	if (n-d<0) printf("%d ",a[0]);
        else{   for(i=n-d, sum=0;i<=n-1;i++) {
                    sum=sum+a[i]; }
        	    printf("%d",sum); }
    	return 0; }