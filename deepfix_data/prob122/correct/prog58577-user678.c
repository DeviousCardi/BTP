#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i, j;
    i=1;
    j=1;
    int flag;
    int a[i][j];
    for(i=0;i<=n;i++) {
        for(j=0;j<=n;j++) {
            if(((i=j)&&a[i][j]==1)&&((i!=j)&&a[i][j]==0)) {
                flag=1;
                break ; }
            else {
                flag=1; } } }
    if(flag=1) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX", n,n); }
 else {
     printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n,n); }
    return 0; }