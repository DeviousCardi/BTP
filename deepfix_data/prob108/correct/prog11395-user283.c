#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i=1,j,sp,r;
    printf("Enter no of rows: ");
    scanf("%d", &n);
    printf("\n*\n");
    for(r=1; r<=n; r++) {
  printf("*");
  for(sp=1; sp<i; sp++)
    printf(" ");
  printf("*\n"); }
 for(j=1; j<=n+2; j++)
   printf("*");
	return 0; }