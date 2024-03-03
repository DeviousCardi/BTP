#include <stdio.h>
#include <stdlib.h>
int main () {
    int i,j,k,a;
    scanf ("%d",&a);
    for (i=1;i<=a;i++) {
        for (j=1;j<=a-i+1;j++)
        printf ("%d",j%10);}
        printf ("\n"); }
return 0;
}*