#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j,temp=0;
	scanf("%d",&n);
	int a[n];
	   for(i=0;i<(n+1);i++) {
	    scanf("%d",&a[i]); }
	   if(n==1) {
	     printf("Yes"); }
	   if(n!=1) {
	     if((a[i]!=a[0])&&(a[i]!=a[n-1])) {
	      for(j=0;j<n;j++) {
	            if((a[i]>a[i-1])&&(a[i]>a[i+1])) {
	                  printf("Yes");
	                  break; }
	           else if((a[i]<a[i-1])||(a[i]<a[i+1])) { } } } }
	   return 0; }