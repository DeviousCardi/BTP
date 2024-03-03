#include <stdio.h>
int main() {
    int i,j,a,n,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        if(i==n) {
            for(j=1;j<=n;j++) {
                scanf("%d",&a);
                if((j%n==0)&&(a==1))
                count=count+1;
                else if((j%n!=0)&&(a==0))
                count=count+1;
                else
                count=count+0; } }
        if(i!=n) {
            for(j=1;j<=n;j++) {
                scanf("%d",&a);
                if((j%n==i)&&(a==1))
                count=count+1;
                else if((j%n!=i)&&(a==0))
                count=count+1;
                else
                count=count+0; } } }
    if(count==n*n) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }