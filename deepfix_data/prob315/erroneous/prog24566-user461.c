#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,j,count=0;
	scanf("%d",&d);
	int a[n];
	int b[n];
	for(int i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(int i=0;i<n-1;i++) {
	       b[i]=0;
	       for(j=i+1;j<n;j++) {
	           if(a[j]<a[i]) {
	               count++;
	               b[i]++; } } }
	   printf("%d\n",count);
for(int i=0;i<n;i++) {
	    printf("%d ",b[i]); }
	return 0; }