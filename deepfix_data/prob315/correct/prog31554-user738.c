#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k=0;
	scanf("%d",&n);
	int a[n],b[n],count=0,sum=0;
	for(i=0;a[i]!='\0';i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=i;j<n;j++) {
	        if(a[i]>a[j] && i<j) {
	           count++; } }
	    b[k]=count;
	    k++; }
	for(i=0;i<k;k++) {
	    sum=sum+b[i]; }
	printf("%d\n",sum);
	for(i=0;i<k;i++) {
	    printf("%d ",b[i]); }
	return 0; }