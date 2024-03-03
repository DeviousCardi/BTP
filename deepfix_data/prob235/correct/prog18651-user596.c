#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=n-i;j>=1;j--)
        printf(" ");
        for(k=n-i+1;k<=n+i-1;k++)
        {printf("%d",k%10); }
       printf("\n"); } {
         int i,j,k,n;
       scanf("%d",&n);
       for(j=0;j<=i-1;j++)
       printf(" ");
       for(k=i;k<=2*n-i;k++)
     printf("%d",k);
     return 0;} }