#include <stdio.h>
int main(){
    int a,i,j,m,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    { for (j=1;j<=n;j++)
        {scanf("%d",&m);
        if (i==j) a=1;
        else a=0;
        if (m!=a) { printf("GIVEN %d x %d matrix is NOT an IDENTITY   MATRIX",n,n); break;}
        }}
    return 0; }