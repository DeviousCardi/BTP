#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,A[n],j,mode=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	     scanf("%d",&A[i]); }
	for(i=0;i<n;i++) {
	      for(j=i+1;j<n;j++) {
	           if(A[j]==A[i]) {
	                 mode=A[j]; } } }
	 printf("%d",mode);
   	 return 0; }