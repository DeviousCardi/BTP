#include <stdio.h>
#include <stdlib.h>
void finding values(int x[4][6],int m,int n);
int main() {
    int i,j,k,a[4][6];
    scanf("%d",&k);
    for(i=0;i<4;i++) {
        for(j=0;j<6;j++) {
            finding values(a,i,j); } }
    for(i=0;i<4;i++) {
        for(j=0;j<6;j++) {
            if(k==a[i][j]) {
                printf("%d%d",i,j); }
            else
            printf("-1"); } } }
void finding values(int x[4][6],int m,int n) {
    if(m==0) {
        x[m][n]=n+1; }
    else if(m>0 && n==0) {
        x[m][n]==finding values(x[4][6],m-1,1); }
    else
    x[m][n]=finding values(x[4][6],m-1,finding values(x[4][6],m,n-1)) }