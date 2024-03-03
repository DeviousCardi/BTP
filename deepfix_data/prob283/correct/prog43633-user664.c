#include <stdio.h>
#include <stdlib.h>
int ack(int a,int m,int n) {
    if(m==0)
    n=a-1;
    if(m>0&&n==0)
    a=ack(a,m-1,1);
    if(m>0&&n>0)
    a=ack(a,m-1,ack(a,m,n-1));
    return a; }
int main() {
    int k,m,n;
    scanf("%d",&k);
    while(ack(k,m,n))
    printf("%d%d",m,n);
	return 0; }