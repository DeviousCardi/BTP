#include <stdio.h>
int main() {
    int n,i,flag=0;
    scanf("%d",&n);
    char mat[n];
    int mat2[n];
    scanf("%s",mat);
    for(i=0;i<n;i++) {
        mat2[i]=0; }
    for(i=0;i<2*n-1;i=i+2) {
        mat2[(int)mat[i/2]]=mat2[(int)mat[i/2]]+1; }
    for(i=1;i<n;i++) {
       if(mat2[i]!=i && mat[i]!=0) {
           flag=1;
           printf("NO");
           break; } }
    if(flag!=1) {
        printf("YES"); }
    return 0; }