#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,i,j;
    scanf ("%d",&a);
    for(i=1;i<=a;i++) {
        for(j<=1;j<=a;j++) {
            if(i<=(a+1)/2) {
                    if(j>=i && i<a-(i+1))
                    printf ("*");
                    else
                    if (i>=a-(i+1))
                    printf (" "); }
            else
            {   if(j<=i && i>a-(i+1))
                printf ("*");
                else
                if(i<=a-(i+1))
                printf(" "); } }
                     printf("\n"); }
	return 0; }