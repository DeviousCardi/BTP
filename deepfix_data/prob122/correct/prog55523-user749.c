#include <stdio.h>
int main(){
    int n;
    int i,j;
    int element;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&element);
            if(i==j&&element==1) continue;
            else if(i!=j&&element==0) continue;
            else break; }
        if(j==n) continue;
        else break;
        scanf("\n"); }
    if(i==n&&j==n) printf("GIVEN %dX%d matrix is an IDENTITY MATRIX",n,n);
    else printf("GIVEN %dX%d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }