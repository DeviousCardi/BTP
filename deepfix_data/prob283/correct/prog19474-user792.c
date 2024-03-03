#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n,int k)
{   int i,j;
    for(i=m;i>=0;i--) {
        for(j=n;j>=0;j--) {
            if(i==0) {
                if(k==n+1) {
                    printf("%d %d",i,j);
                    return 1; } }
            if(i>0 && j==0)  ackermann(i-1,1,k);
            if(i>0 && j>0) ackermann(i-1,ackermann(i,j-1,k),k); } }
    return 0; }
int main(){
    int k ,i,j,m=3,n=5;
    scanf("%d",&k);
    for(i=0;i<=m;i++) {
        for(j=0;j<=n;j++) {
            if(ackermann(i,j,k))
                return 0; } }
    printf("-1");
    return 0; }