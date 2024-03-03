#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[1000],count=0,i,n,j;
	a[0]=0;
	a[1]=1;
	for(i=1;i<=998;i++) {
	    a[i+1]=a[i]+a[i-1]; }
	scanf("%d\n",&n);
	int b[n];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&b[i]); }
	for(i=0;i<n;i++) {
	    for(j=0;j<1000;j++) {
	        if(b[i]==a[j]) {
	            count++;
	            printf("yes\n"); } }
	if(count==0)
	        printf("no\n"); }
	return 0; }