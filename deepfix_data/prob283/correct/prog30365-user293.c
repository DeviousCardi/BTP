#include <stdio.h>
#include <stdlib.h>
int ack(int m,int n) {
    if(m==0) return n+1;
    else if(m>0 && n==0) return ack(m-1,1);
    else return ack(m-1,ack(m,n-1)); }
int main() {
	int k,i,j;
	scanf("%d",&k);
	for(i=0;i<=3;i++) {
	    for(j=0;j<=5;j++)
	    if(ack(i,j)==k) {
	        printf("%d %d",i,j);
	        return 0; } }
	printf("%d",-1);
	return 0; }