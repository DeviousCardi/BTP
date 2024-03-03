#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	int count = 0;
	int sum = 0;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d ",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]>a[j]) {
	          count++; } }
	    a[i] = count;
	    sum = sum + count;
	    count = 0; }
	printf("%d\n",sum);
	for(i=0;i<n;i++) {
	    printf("%d ",a[i]); }
	return 0; }