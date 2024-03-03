#include <stdio.h>
#include <stdlib.h>
int ack(int m,int n) {
    int a;
    if(m==0) return (n+1);
    else if(m>0 && n==0) a=ack(m-1,1);
    else if(m>0 && n>0) a=ack(m-1,ack(m,n-1));
    return a; }
int main() {
	int i,j,k;
	scanf("%d\n",&k);
	for(i=0;i<=3;i++) {
	    for(j=0;j<=5;j++) if(ack(i,j)==k) {
	        printf("%d %d",i,j);
	        return 0; } }
    if(i==4 && j==6) printf("-1");
	return 0; }