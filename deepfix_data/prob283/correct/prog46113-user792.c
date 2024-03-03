#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n,int k) {
    for(m=3;m>=0;m--) {
        for(n=5;n>=0;n--) {
            if(m==0) {
                if(k==n+1) {
                    printf("%d %d",m,n);
                    return n+1; } }
            if(m>0 && n==0) ackermann(m-1,1,k);
            if(m>0 && n>0) ackermann(m-1,ackermann(m,n-1,k),k); } }
    printf("-1");
    return 0; }
int main(){
    int k,m=3,n=5;
    scanf("%d",&k);
    ackermann(m,n,k);
    return 0; }