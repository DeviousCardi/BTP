#include <stdio.h>
int main() {
	   int n,i,j,count=0;
	   scanf("%d",&n);
	   int numbers[n];
	   i=0;
	   for(i;i<=n-1;i++) {
	       scanf("%d",&numbers[i]); }
	   i=0;
	   for(i;i<n-1;i++) {
	     j=i+1;
	     for(j;j<=n-1;j++) {
	       if(numbers[i]==numbers[j]) {
	           count=1;
	           break; } }
	     if(count==1) {
	         break; } }
	   if(count==1) {
	       printf("YES"); }
	   else {
	       printf("NO"); }
	return 0; }