#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
    scanf("%d",&h);
	for(i=1;i<=h;i=i+1) {
    if (i<(h+3)/2) {
            for (j=1;j<=(((h+1)/2)-i);j++)
         printf (" ");
            printf ("*");
            for (k=1;k<i-1;k++)
            printf (" ");
            if (i==1);
         else    printf ("*"); }
    else {
            for (j=1;j<=(i-(h+1)/2);j++)
         printf (" ");
            printf ("*");
            for (k=1;k<h-i;k++)
            printf (" ");
            if (i==h);
         else    printf ("*"); }
    printf("\n");}
	return 0; }