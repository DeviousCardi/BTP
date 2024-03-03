#include <stdio.h>
int main() {
    int a,n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
        {scanf("%d",&a);}
        printf("\n");
            if((i==j)&&(a==1))
            {   if((i!=j)&&(a!=1))
                printf("GIVEN nxn matrix is an IDENTITY MATRIX");
            else printf("GIVEN nxn matrix is NOT AN IDENTITY MATRIX"); } } }
    return 0; }