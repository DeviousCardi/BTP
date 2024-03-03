#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i, j;
    int flag;
    int a[i][j];
    for(i=0;i<=n;i++) {
        for(j=0;j<=n;j++) {
            if(((i=j)&&a[i][j]==1)&&((i!=j)&&a[i][j]==0) {
                flag=0;
                break }
            else {
                flag=1; } } }
    if(flag=1) {
        printf("%d*%d matrix is an IDENTITY MATRIX"); }
 else {
     printf("%d*%d matrix is NOT an IDENTITY MATRIX"); }
    return 0; }