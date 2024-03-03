#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
    if(m==0)
    return n+1;
    else if(m>0&&n==0)
    return ackermann(m-1,1,a);
    else
    return
    ackermann(m-1,ackermann(m,n-1,a),a); }
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=3;i>=0;i--) {
	    for(j=5;j>=0;j--) {
	       k= ackermann(i,j);
	       if(k==n) {
	           printf("%d %d",i,j); } } }
	return 0; }