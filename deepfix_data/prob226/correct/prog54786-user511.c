#include <stdio.h>
int main() {
    int d,n,i,j,sum=0;
    scanf("%d %d",&d,&n);
    int mat[d];
    for(i=0;i<d;i++) {
        scanf("%d",&mat[i]); }
    if(n==0) {
        printf("%d",mat[0]); }
    else {
    int mat2[n];
    for(i=0;i<d;i++) {
        mat2[i]=mat[i]; }
    if(n>=d) {
        for(i=d;i<n;i++) {
        sum=0;
        for(j=i-1;j<=i-d;j--) {
           sum=sum+mat2[j]; }
        mat2[i]=sum; } }
    printf("%d",mat2[n]); }
    return 0; }