#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[20];
	scanf("%d,n");
	for(i=0; i<n ;i++) {
	scanf("%d",&a[i]); }
	int n2,j,t;
	scanf("%d",&n2);
	for(j=0; j<n2; j++) {
	    scanf("%d",&t); }
	if (i==0) {
	    if(a[0]>a[1]) {
	    printf("yes\n"); }
	    else
       printf("no\n"); }
       if(i==n-1) {
        if(a[i-1]>a[i-2]) {
         printf("yes\n"); }
          else
        printf("no\n"); }
	    if(a[i]>a[i+1] && a[i]>a[i-1]) {
	        printf("yes\n"); }
	    else
	    printf("no\n");
	return 0; }