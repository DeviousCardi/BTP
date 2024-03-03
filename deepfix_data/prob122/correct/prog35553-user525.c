#include <stdio.h>
int main(){
    int n;
    int k;
    scanf("%d \n",&n);
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
        scanf("%d ",&k);
        printf("%d ",k);
        if(i==j&&k==1||i!=j&&k==0)
            continue;
        else if(i==j&&k!=1||i!=j&&k!=0)
        break;
    } if(j!=n)
     break; }
    if(i==n+1&&j==n+1)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else{printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);}
    return 0; }