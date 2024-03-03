#include <stdio.h>
    int main(void) {
	int a[10000],i,j,n,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<100;i++) {
	    b[i]=0; }
	for(i=0;i<100;i++) {
	    for(i=0;i<n;i++) {
	        if(a[i]==i) {
	            b[i]=b[i]+1; } } }
	for(i=0;i<n;i++) {
	    for(j=0;j<b[i];j++) {
	        printf("%d ",j); } }
	printf("end");
    return 0; }