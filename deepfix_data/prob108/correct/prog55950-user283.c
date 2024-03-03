#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i=1,j,sp,row,col;
    scanf("%d", &n);
    printf("\n*\n");
    for(i=1; i<=n; i++) {
  printf("*");
  for(sp=1; sp<i; sp++)
    printf(" ");
  printf("*\n"); }
 for(j=1; j<=n+2; j++)
   printf(" ");
   for(row=n-1;row<=1;row++) {
       printf("*");
       for(col=i;col>=1;col--)
       printf("*");
       printf("*\n"); }
	return 0; }