#include <stdio.h>
int main(){
    int n,i,j,m,p;
    scanf("%d\n",&n);
    p=1;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
        scanf("%d ",&m);
        if(((i==j)&&(m!=1))||((i!=j)&&(m!=0)))
        {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);p=0;e=0;break;} }
        scanf("\n");
        if(e==0)
        break; }
    if(p==1)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }