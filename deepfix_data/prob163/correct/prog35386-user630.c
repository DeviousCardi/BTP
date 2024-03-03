#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,a,b,c;
	char A[500],B[500],C[501],ch;
	scanf("%d",&a);
	scanf("%d",&b);
	A[0]=getchar();
	for(i=1;i<a;i++)
	  {    ch=getchar();
	       A[i]=ch; }
	B[0]=getchar();
	for(i=1;i<b;i++) {
	    ch=getchar();
	    B[i]=ch; }
	if(a>b)
	  c=a+1;
	else if(a<b)
	  c=b+1;
	else if(a==b)
	  c=a+1;
	for(i=0;i<c;i++) {
	      C[i]=0; }
	for(i=c-2;i>=0;i--) {
	      ch=A[i]+B[i];
	      C[i]=C[i]+(ch/10);
	      C[i+1]=C[i+1]+ch%10; }
	  for(i=0;i<c;i++) {
	         ch=C[i];
	         printf("%c",C[i]); }
	return 0; }