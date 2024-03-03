#include <stdio.h>
int main(){
    int i,j,n,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d\n",&a);
            if(i==j&&a==1)
                printf("Given %d x %d matrix is an IDENTITY MATRIX",n,n);
            break; } {
             for(j=1;j<=n;j++)
               if(i!=j&&a==0)
                 printf("Given %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
             break; } }
    return 0; }