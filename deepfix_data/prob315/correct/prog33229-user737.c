#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k,sum=0;
	scanf("%d",&n);
	int a[n],count[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    for(k=0;k<i;i++) {
	        if(a[k]<a[i]) {
	            count[i]++; }
	        sum=sum+count[i]; } }
	printf("%d\n",sum);
	for(i=0;i<n;i++) {
	    printf("%d ",count[i]); }
	return 0; }