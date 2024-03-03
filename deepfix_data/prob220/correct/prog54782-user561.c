#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<a+1;i=i+1)
    {for (k=0;k<a-i;k++) {
            printf (" ");
        };
        for (j=1;j<2*i;j=j+1) {
           printf ("%c",'*'); }
        printf (" \n"); }
	return 0; }