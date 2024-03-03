#include <stdio.h>
#include <stdlib.h>
int main() {
    int height,i,j,k;
    scanf("%d",&height);
    for(i=1;i<=(2*height-1);i++)
      printf("*");
      printf("\n");
    for(j=1;j<height;j++) {
        for(k=1;k<=(2*height-1)-j;k++) {
             if(k==j+1)
         printf("*");
         else
         printf(" "); }
        printf("\n"); }
	return 0; }