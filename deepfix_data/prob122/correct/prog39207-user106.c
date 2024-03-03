#include <stdio.h>
int main(){
    int i,j,n,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            if(i==j&&a==1)
                printf("Given nxn matrix is an IDENTITY MATRIX");
            break; } {
            for(j=1;j<=n;j++)
             if(i!=j&&a==0)
                printf("Given nxn matrix is NOT an IDENTITY MATRIX");
            break; } }
    return 0; }