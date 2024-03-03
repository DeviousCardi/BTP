#include <stdio.h>
#include <stdlib.h>
int main () {
    int i,j,k,a;
    scanf ("%d",&a);
    for (i=1;i<=a;i++) {
        for (j=1;j<=a-i;j++)
        printf (" ");
        for (k=2*i-1;k>=1;k--)
         printf ("%d",k%10);
        printf ("\n"); }
return 0; }