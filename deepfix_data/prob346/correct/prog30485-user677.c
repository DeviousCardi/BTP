#include <stdio.h>
    int main(void) {
	int a[10000],i,j,n,b;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    b=a[i];
	    for(j=n-1;j>i;j--) {
	        if(b>a[j]) {
	            a[i]=a[j];
	            a[j]=b;
	            b=a[i]; } } }
	for(i=0;i<n;i++) {
	    printf("%d ",a[i]); }
	printf("end");
    return 0; }