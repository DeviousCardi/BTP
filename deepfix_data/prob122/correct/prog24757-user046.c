#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&arr[i][j]); } }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i!=j) {
                if(arr[i][j]!=0) {
                  printf("GIVEN %d X %d matrix is NOT an IDENTITY MATRIX",n,n);goto label; } }
            else {
                if(arr[i][i]!=1)
                {printf("GIVEN %d X %d matrix is NOT an IDENTITY MATRIX",n,n);goto label;} } } }
    printf("GIVEN %d X %d matrix is an IDENTITY MATRIX",n,n);
    label:
    return 0; }