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
    int max=a[0][0];
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            if (a[i][j]>max){
                max=a[i][j]; }
        }}
    printf("%d",max);
    return 0; }