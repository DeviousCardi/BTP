#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,i,j;
    scanf ("%d",&a);
    for(i=1;i<=a;i++) {
        for(j=1;j<=a;j++) {
            if (i<=(a+1)/2)
            {if (j >((a+1)/2) -i && j<= a-(((a+1)/2)-i))
            printf("*");
            else printf (" "); }
            else {
            if (i>=(a+1)/2)
            {j>i-((a+1)/2)&& j<=a-(i-(a+1)/2)
            printf("*")
            else printf(" ") }
        printf("\n"); }
	return 0; }