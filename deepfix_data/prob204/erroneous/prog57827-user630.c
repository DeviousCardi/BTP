#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i,a,len=50,j,A[50],ret=1;long k;
	for(i=0;i<50;i++) {
	      A[i]=0; }
	scanf("%d",&a);
	for(i=0,j=50;i<50;i++,j--) {
	      k=pow(10,j);
	      A[i]=a/k;
	      a=a%k; }
	for(i=49;i>0;i--) {
	     if(A[i]!=0) {
	       len--; } }
	 for(i=0,j=len-1;i<(len/2);i++,j--) {
	       if(A[i]!=A[j]) {
	            ret=0; } }
	  if(ret==0) {
	       printf("NO"); }
	  else(ret==1) {
	       printf("YES"); } } }
 	return 0; }