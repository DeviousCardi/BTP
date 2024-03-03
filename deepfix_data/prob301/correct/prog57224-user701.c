#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[10000],i,j=0,max=0,num;
	scanf("%d",&n);
	for(i=0;i<n;++i)
	scanf("%d",&a[i]);
	if(n==1) {
      printf("%d",a[0]); }
	else {
	for(i=0;i<n-1;++i) {
	    if(a[i]==a[i+1]) {
	        j++; }
	    else {
	        if(j>=max) {
	            max=j;
	            num=a[i]; }
	        j=0; } }
	printf("%d",num); }
	return 0; }