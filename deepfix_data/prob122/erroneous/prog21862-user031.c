#include <stdio.h>
int main(){
    int n,i,j,k,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a);
            if(i==j&&a==1)
            count++;
            else if(i!=j&&a==0)
            continue;
            else
            break; } }
    if(count==n)
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX");
    else
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX");
    return 0; }