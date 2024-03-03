#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=0,j,k,n,t;
	scanf("%d\n",&n);
	int row[i];
	for(i=0;i<n;i++) {
	       scanf("%d\n",&row[i]); }
	       if(n==1) {
	             printf("Yes"); }
	       else {
	             scanf("%d\n",&t); }
	       for(j=0;j<t;j++) {
	              scanf("%d\n",&k); }
	       if(k==0) {
	             if(row[0]>row[1]) {
	                   printf("Yes\n"); }
	             else {
	                     printf("No\n"); } }
	       if(k==n-1) {
	             if(row[n-1]>row[n-2]) {
	                   printf("Yes\n"); }
	             else {
	                     printf("No\n"); }
	   else if(k>0&&k<n-1) {
	    if(row[k]>row[k-1]&&row[k]>row[k+1])
	        printf("Yes\n");
	       else
	        printf("No\n"); } }
	return 0; }