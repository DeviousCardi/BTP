#include <stdio.h>
int main() {
    int n,a=0;
    scanf("%d",&n);
    int i =0;
    int count = 0;
    for ( i=0;i< n*n;i++) {
        count=0;
        scanf("%d",&a);
        if(i%(n+1) ==0) {
            if(a==1)
            count =1;
            else {
                count =0;
                break; } }
        if (i%(n+1) !=0 ) {
            if(a==0)
            count =1;
            else {
                count =0;
                break; } } }
    if ( count==1) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }