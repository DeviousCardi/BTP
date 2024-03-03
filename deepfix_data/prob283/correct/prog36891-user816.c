#include <stdio.h>
#include <stdlib.h>
int A(int m ,int n) {
    if(m==0)
    return n+1;
    if(m>0&&n==0)
    return A(m-1,1);
    if(m>0&&n>0)
    return A(m-1,A(m,n-1));
    return 0; }
int main() {
	int m,n,k,x=0;
	scanf("%d",&k);
	for(m=0;m<=3;m++) {
	    for(n=0;n<=5;n++) {
	        if(k==A(m,n)) {
	          x++;
	          printf("%d %d",m,n); }
	        if(x==1)
	        break; }
	    if(x==1)
	    break; }
    if(x==0)
	printf("-1");
	return 0; }