#include <stdio.h>
#include <stdlib.h>
int ack(int m,int n) {
    if(m) {
        if(n) return ack(m-1,ack(m,n-1));
        return ack(m-1,1); }
    return n+1; }
int main() {
    int i,j,k;
    scanf("%d",&k);
    for(i=0;i<=3;i++)
        for(j=0;j<=5;j++)
            if(k==ack(i,j)) {
                printf("%d %d",i,j);
                return 0; }
    printf("-1");
	return 0; }