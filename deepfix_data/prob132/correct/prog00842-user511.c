#include <stdio.h>
int main() {
    int n,i,flag=0,count=0;
    scanf("%d",&n);
    char mat[2*n];
    int mat2[n+1];
    scanf("%s",mat);
    for(i=0;i<=n;i++) {
        mat2[i]=0; }
    for(i=0;i<2*n-1;i=i+2) {
        mat2[mat[i]-'0']=mat2[mat[i]-'0']+1; }
    for(i=0;i<2*n-1;i=i+2) {
       if(mat[i]-'0'!=mat2[mat[i]-'0']) {
           flag=1;
           printf("No");
           break; } }
    if(flag!=1) {
        printf("Yes"); }
    return 0; }