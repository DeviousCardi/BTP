#include <stdio.h>
int main() {
 int n,i=0,j=0,f[i][j],t;
 t=0;
 scanf("%d",&n);
 for(i=0;i<n;i++) {
     for(j=0;j<n;j++) {
         scanf("%d",&f[i][j]);
        if(i==j) {
            if(f[i][j]!=1) {
                t=2;break; } }
        if(i!=j) {
            if(f[i][j]!=0) {
                t=2;break; } } }
     if(t==2)
     break; }
 if(t!=2)
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
 else
 printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }