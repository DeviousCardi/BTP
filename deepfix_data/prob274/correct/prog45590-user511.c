#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int mat[n],mat2[500];
    for(i=0;i<n;i++) {
        scanf("%d",&mat[i]); }
    mat2[0]=1;
    mat2[1]=mat[0];
    for(i=0;i<500;i++) {
        mat2[i+2]=mat[mat2[i+1]-1];
        printf("%d ",mat2[i+2]); }
    return 0; }