#include <stdio.h>
#include <stdlib.h>
int A(int m, int n) {
    if((m==0)&&(n<=5)) {
        return n+1; }
    if((m>0)&&(n==0)&&(m<=3)) {
        return A(m-1,1); }
    if((m>0)&&(n>0)&&(m<=3)&&(n<=5)) {
        return A(m-1,A(m,n-1)); }
    return 0; }
int main() {
	int i=0,j=0,k;
	scanf("%d",&k);
	for(j=0;j<=3;j++) {
	   for(i=0;i<=5;i++) {
	      if(k==A(i,j))
	        printf("%d ""%d",i,j);
	        break; }
	    if(k==A(i,j))
	    break; }
	if(k!=A(i,j))
	 printf("-1");
	return 0; }