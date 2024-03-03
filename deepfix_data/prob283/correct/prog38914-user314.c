#include <stdio.h>
#include <stdlib.h>
int A(int m, int n) {
    if((m==0)&&(n<=5)) {
        return n+1; }
    if((m>0)&&(n==0)&&(m<=3)) {
        return A(m-1,1); }
    if((m>0)&&(n>0)&&(m<=3)&&(n<=5)) {
        return A(m-1,A(m,n-1)); }
    return -1; }
int main() {
	int i=0,j=0,k;
	scanf("%d",&k);
	for(i=0;i<=3;i++) {
	   for(j=0;j<=5;j++) {
	      if(k==A(i,j))
	        printf("%d ""%d",i,j); } }
	return 0; }