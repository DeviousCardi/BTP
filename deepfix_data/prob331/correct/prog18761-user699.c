#include <stdio.h>
int main(){
    int n,b=0,d=0;
    scanf("%d",&n);
    int a[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]); } }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==j){
                if (a[i]==a[j]==1){
                    b=1; } }
            else if(i!=j){
                if (a[i]==a[j]==0){
                    d=1; } } } }
    if (b==1&&d==1){
        printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n,n); }
    else printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }