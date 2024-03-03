#include <stdio.h>
#include <stdlib.h>
int ack(int m,int n);
void ind(int a);
int main() {
	int k;
	scanf("%d",&k);
    ind(k);
	return 0; }
void ind(int a) {
    int i,j;
    for(i=0;i<=3;i++)
        for(j=0;j<=5;j++) {
            if(k==ack(i,j))
                printf("%d %d\n",i,j); } }
int ack(int m,int n) {
    if(m==0)
        return (n+1);
    else if(n==0);
        return ack(m-1,1);
    else
        return ack(m-1,ack(m.n-1)); }