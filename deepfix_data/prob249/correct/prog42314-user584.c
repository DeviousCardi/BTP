#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j;
    scanf("%d",&h);
	for(i=1;i<=h;i=i+1) {
    if (i<(h+3)/2) {
        for (j=1;j<(((h+1)/2)-i);j++)
        printf (" ");
        printf ("*"); }
    printf("\n");}
	return 0; }