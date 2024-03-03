#include <stdio.h>
#include <stdlib.h>
int Ack (int m, int n) {
    if (m==0)
    return n+1;
    if (m>0&&n==0)
    return Ack(m-1,1)
    else return Ack(m-1, Ack(m,n-1)); }
int main() {
    int i, j, k,a;
    scanf("%d",&k);
    for (i=0;i<=3;i++) {
        for (j=0;j<=5;j++) {
            if (Ack(i,j)==k)
            printf("%d %d", i,j);
            else
            a=0; } }
    if (a==0)
    printf("-1");
	return 0; }