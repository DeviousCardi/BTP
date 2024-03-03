#include <stdio.h>
#include <stdlib.h>
int ack(int m,int n) {
    int a;
    if(m==0)
    a=n+1;
    if(m>0&&n==0)
    a=ack(m-1,1);
    if(m>0&&n>0)
    a=ack(m-1,ack(m,n-1));
    return a; }
int main() {
    int k,m,n;
    scanf("%d",&k);
    k=ack(m,n);
    printf("%d%d",m,n);
	return 0; }