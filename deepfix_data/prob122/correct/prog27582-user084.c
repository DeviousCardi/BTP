#include <stdio.h>
int main(){int i,j,no,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++) {
    scanf("%d",&no);
    if(i==j&&no!=1)
    printf("GIVEN n x n is NOT an IDENTITY MATRIX");
    if(i!=j&&no!=0)
    printf("GIVEN n x n is NOT an IDENTITY MATRIX");
    else
    printf("GIVEN n x n is an IDENTITY MATRIX");
    }}
    return 0; }