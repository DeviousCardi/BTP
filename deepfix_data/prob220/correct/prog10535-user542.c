#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
     {printf(" ");}
      printf("*\n");
    for(i=0;i<n-2;i++) { {
        for(j=0;j<n-2-i;j++)
        printf(" "); }
    printf("*"); {
        for(j=0;j<2*i+1;j++)
        printf(" ");
         printf("*"); }
        printf("\n"); }
    for(i=0;i<2*n-1;i++) {
        printf("*"); }
	return 0; }