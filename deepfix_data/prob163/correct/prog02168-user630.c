#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,ch,a,b,A[500],B[500],C[501],c;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=0;i<a;i++) {
	     scanf("%d",&A[i]); }
	for(i=0;i<b;i++) {
	     scanf("%d",&B[i]); }
	if(a>b)
	  c=a;
	else if(a<b)
	  c=b;
	else if(a==b)
	  c=a;
	for(i=0;i<c;i++) {
	      C[i]=0; }
	for(i=c-1;i>=0;i--) {
	      ch=A[i]+B[i];
	      C[i-1]=C[i-1]+(ch/10);
	      C[i]=ch%10; }
	  for(i=0;i<c;i++) {
	         printf("%d",C[i]); }
	return 0; }