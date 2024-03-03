#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,i,j;
    scanf ("%d",&a);
    for(i=1;i<=a;i++) {
        for(j=1;j<=a;j++) {
            if(i<=(a+1)/2) {
                    if(j>=i && i<(a+1)-(i))
                    printf ("*");
                    else
                    if (i>(a+1)-i)
                    printf (" "); }
            else
            {   if(j<=i && i>(a+1)-(i))
                printf ("*");
                else
                if(i<=(a+1)-(i))
                printf(" "); } }
                     printf("\n"); }
	return 0; }