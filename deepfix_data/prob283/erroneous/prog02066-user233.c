#include <stdio.h>
#include <stdlib.h>
int ackerman(int m,int n) {
    if(m==0)
    return n+1;
    if(n==0&&m>0)
    return ackerman(m-1,1);
    if(m>0&&n>0)
    return ackerman(m-1,ackerman(m,n-1)); }
int main() {
	int k,j=0,i=0;
	scanf("%d",&k);
	for(i=0;ackerman(i,j)<=k;i++)
	for(j=0;ackerman(i,j)<=k;j++) {
	    if(ackerman(i,j)==k) {
	        printf("%d %d",i,j)
	        break; } }
	return 0; }