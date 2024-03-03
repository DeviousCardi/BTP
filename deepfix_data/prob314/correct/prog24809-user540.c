#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[n];
	scanf("%d",&n);
	   for (i=0;i<n;i++) {
	       scanf("%d",&a[i]); }
	   for (i=0;i<n;i++){
	       if (i==0){
	           if (n==1) {
	           printf("0"); }
	           if (n!=1 ) {
	               if(a[0]<a[1]){
	               printf ("%d",i); } } }
	         if (i==n-1) {
	               if(a[n-1]<a[n-2]){
	               printf ("%d",i); } }
	       if (a[i]<a[i-1] && a[i]<a[i+1]) {
	       printf("%d\n",i); } }
	return 0; }