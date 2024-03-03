#include <stdio.h>
int main() {
    int n,i,flag=0,count=0;
    scanf("%d",&n);
    char mat[2*n];
    int mat2[n];
    scanf("%s",mat);
    for(i=0;i<n;i++) {
        mat2[i]=0; }
    for(i=0;i<2*n-1;i=i+2) {
        mat2[mat[i]-'0']=mat2[mat[i]-'0']+1; }
    for(i=1;n!=1;i++) {
        if(n%i==0) {
            count=count+1;
            n=n/i; } }
    for(i=1;i<=count;i++) {
       if(mat2[i]!=i) {
           flag=1;
           printf("No");
           break; } }
    if(flag!=1) {
        printf("Yes"); }
    return 0; }