#include <stdio.h>
int main(){
 int n,i,j,a,f=0;
 scanf("%d",&n);
for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
        scanf("%d",&a);
        if(i==j) {
            if(a!=1)
            f=1; }
        else {
            if(a!=0)
            f=1; } } }
    if(f==1) {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    else
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }