#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[100],b[100];
	int n,i,j,count=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) scanf("%d ",&a[i]);
	for(i=0;i<100;i++) a[i]=0;
	for(i=0;i<n;i++){
	    for(j=i+1;j<n;j++) {
	        if(a[j]<a[i]) {
	            count++;
	            b[i]++; } } }
	printf("%d",count);
	for(j=0;j<n;j++) {
	    printf("%d ",b[j]); }
	return 0; }