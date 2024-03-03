#include <stdio.h>
int main(){
    int n,i,j,a,b,c;
    b=0;
    c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            if(i==j) {
                if(a==1)
                b++; }
            if(i!=j) {
                if(a==0)
                c++; } } }
    if((b==n)&&(c==((n*n)-n)))
    printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n,n);
    return 0; }