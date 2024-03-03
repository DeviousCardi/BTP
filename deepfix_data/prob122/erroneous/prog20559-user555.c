#include <stdio.h>
int main()
{   int n,i,j,flag=0,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&x);
            if(((i==j)&&(x!=1))||((i!=j)&&(x!=0)))
                flag++; } }
    if(ctr==0)
        printf("GIVEN %dx%d matrix is an IDENTITY MATRIX");
    else
        printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX");
    return 0; }