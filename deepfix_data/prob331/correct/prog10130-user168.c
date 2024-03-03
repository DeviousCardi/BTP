#include <stdio.h>
#define MAX 100
int main(){
    int n,a[MAX][MAX],i,j;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d ",&a[i][j]); } }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d ",a[i][j]);
       }printf("\n"); }
    return 0; }