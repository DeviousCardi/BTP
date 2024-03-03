#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,i,j;
    scanf ("%d",&a);
    for (i=1;i<=2*a-1;i=i+1) {
        for (j=1;j<=i;j=j+1) {
            if (j=i)
            printf ("*");
            else {
           if ((j>(a+1/2)-i||(a/2)-i) && (j<=((a+1)/2)||(a/2)))
                printf ("  ");
            } }
    printf ("\n"); }
return 0; }