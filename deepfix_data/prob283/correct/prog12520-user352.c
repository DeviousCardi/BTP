#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
    if(m==0)
    return n+1;
    else if(m>0&&n==0)
    return ackermann(m-1,1);
    else
    return ackermann(m-1,ackermann(m,n-1)); }
int main() {
    int k,flag;
    scanf("%d",&k);
    int i,j;
    for(i=0;i<4;i++) {
        for(j=0;j<6;j++) {
            if(ackermann(i,j)==k) {
                flag=0;
                break; } }
        if(flag==0)
        break; }
    if(k<=0)
    printf("-1");
    else {
        if(i==4||j==6)
        printf("-1");
        else
        printf("%d %d",i,j); }
    return 0; }