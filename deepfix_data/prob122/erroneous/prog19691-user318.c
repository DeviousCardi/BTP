#include <stdio.h>
int main() {
    int a;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
    {for(int j=1;j<=n;j++)
    {scanf("%d",&a);
    if((i==j)&(a!=1))
    printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX.");
    else if((i!=j)&&(a!=1))
    printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX.");
    else printf("GIVEN n x n matrix is an IDENTITY MATRIX."); }
    printf("\n"); }
    return 0; }