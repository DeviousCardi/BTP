#include <stdio.h>
int main() {
    int n,a,flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
              scanf("%d",&a);
                if(i==j) {
                    if(a==1) {
                     flag=flag+1; } } } }
             if(flag==n)
              printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
             else
                    printf("GIVEN %d*%d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }