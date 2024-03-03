#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	if(n==1) {
	    printf("Yes");
	    return 0; }
	int a[n],i;
	for (i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	int t;
	scanf("%d",&t);
	int l;
	for(i=1;i<=t;i++) {
	    scanf("%d",&l);
	      if(l==0) {
	          if(a[0]<a[1]) {
	              printf("Yes"); }
	          else {
	              printf("No"); } }
	       else {
	           if(l==(n-1)) {
	               if(a[n-1]<a[n-2]) {
	                   printf("Yes"); }
	               else {
	                   printf("No"); } }
	           else {
	               if((a[n-1]>a[n])&&(a[n]<a[n+1])) {
	                   printf("Yes"); }
	               else {
	                   printf("No"); } } } }
	return 0; }