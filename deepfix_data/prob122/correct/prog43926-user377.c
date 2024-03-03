#include <stdio.h>
int main() {
    int n, x, flag=1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
        scanf("%d",&x);
        if(i==j) {
            if(x!=1) {
                flag=0;
                break; } }
        else {
            if(x!=0) {
                flag=0;
                break; } }
        scanf("\n"); } }
    if(flag==0) {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
 else {
     printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n,n); }
     return 0; }