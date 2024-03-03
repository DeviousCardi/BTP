#include <stdio.h>
#include <stdlib.h>
int ack(int a,int m,int n) {
    if(m==0)
    a==n+1;
    if(m>0&&n==0)
    a=ack(a,m-1,1);
    if(m>0&&n>0)
    a=ack(a,m-1,ack(a,m,n-1));
    return a; }
int main() {
    int m,n,k;
    scanf("%d",&k);
	return 0; }