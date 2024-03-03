#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&a[i][j]); } }
    int b=a[0][0];
    for (i=0;i<n;i++){
        if (a[0][i]>b){
            b=a[0][i]; } }
    for (i=1;i<m;i++){
        int ci=a[i][0];
        for (j=0;j<n;j++){
            if (a[i][j]>ci){
                ci=a[i][j]; } }
        if (ci<b){
                        b=ci; } }
    printf("%d",b);
    return 0; }