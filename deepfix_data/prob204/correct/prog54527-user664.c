#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	 int b[n];
	 for(i=n-1;i>=0;i--) {
	     scanf("%d",&b[i]); }
	 if(a[n]==b[n]) {
	     printf("YES"); }
	 else {
	     printf("NO"); }
	 return 0; }