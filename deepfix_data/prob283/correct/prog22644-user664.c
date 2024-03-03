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
    for(m=0;m<2;m++) {
        for(n=0;n<2;n++) {
            if(k==ack(m,n))
            printf("%d%d",m,n);
            else
            printf("-1"); } }
    return 0; }