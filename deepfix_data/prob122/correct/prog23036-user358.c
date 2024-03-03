#include <stdio.h>
int main(){
    int n;
    int sum=0;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++) {
        int a;
        for(a=1;a<=n;a++) {
            scanf("%d",&a);
            if(a==i&&a==1) {
                if(a!=i&&a==0)
                sum=sum+1; } } }
    if(sum==n)
    printf("GIVEN %d*%d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d*%d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }