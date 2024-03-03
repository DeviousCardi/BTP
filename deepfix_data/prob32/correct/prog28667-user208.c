#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	if(n==1) {
	    printf("Yes\n");
	    return 0; }
	int a[n],i;
	for (i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	int l;
	for(l=1;l<=n-1;l++) {
	      if(l==0) {
	          if(a[0]<a[1]) {
	              printf("Yes\n"); }
	          else {
	              printf("No\n"); } }
	       else {
	           if(l==(n-1)) {
	               if(a[n-1]<a[n-2]) {
	                   printf("Yes\n"); }
	               else {
	                   printf("No\n"); } }
	           else {
	               if((a[l-1]>a[l])&&(a[l]<a[l+1])) {
	                   printf("Yes\n"); }
	               else {
	                   printf("No\n"); } } } }
	return 0; }