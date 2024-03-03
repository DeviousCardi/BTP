#include <stdio.h>
#include <stdlib.h>
int main () {
    int i,j,k,a,b;
    scanf ("%d",&a);
    for (i=1;i<=a;i++) {
        for (j=1;j<=a-i;j++){
        printf (" ");
        b++;}
        for (k=2*i-1;k>=1;k--) {
            b++;
         printf ("%d",b%10); }
        printf ("\n"); }
return 0; }