#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
    if(m==0)
    return n+1;
    if(m>0&&n==0)
    return ackermann(m-1,1);
    if(m>0&&n>0)
    return ackermann(m-1,ackermann(m,n-1)); }
int main() {
    int k;
    scanf("%d",&k);
    int i=0,j=0;
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            if(ackermann(i,j)==k)
            break; }
        if(ackermann(i,j)==k)
        break; }
    if(k<=0)
    printf("-1");
    else {
        if(i>3||j>5)
        printf("-1");
        else
        printf("%d %d",i,j); }
    return 0; }