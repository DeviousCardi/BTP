#include <stdio.h>
int main() {
	int d,n,i,j,k;
	scanf("%d%d",&d,&n);
	int b[d],a[n];
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]);
	    a[i]=b[i]; }
	for(j=d;j<n;j++) {
	    int sum=0;
	    for(k=1;k<=d;k++) {
	        sum=sum+a[j-k]; }
	    a[j]=sum;
	    printf("%d",a[j]);
	}printf("%d",a[n]);
	return 0; }