#include <stdio.h>
#include <stdlib.h>
int main() {
int a,i,j;
scanf("%d",&a);
    for (i=1;i<=a;i++)
    {   for (j=1;j<=a;j++) {
        if (j<=(((a+1)/2)-i))
        printf("*"); }
        printf("\n"); }
	return 0; }