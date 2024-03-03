#include <stdio.h>
#include <stdlib.h>
int A(int m,int n) {
 if(m==0)
 return n+1;
 else if((m>0)&&(n==0))
 return A((m-1),1);
 else if((m>0)&&(n>0))
 return A((m-1),A(m,n-1)); }
int main() {
	int k;
	int m,n;
	scanf("%d",&k);
	if(k==A(m,n)) {
	int min=1000;
	if((m>3)&&(n>5))
	printf("-1");
	if(m<min)
	printf("m");
	if(n<min)
	printf("n"); }
	return 0; }