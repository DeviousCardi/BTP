#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,r,c;
    scanf("%d",&n);
 for(r=1; r<=(n/2)+1; r++) {
  for(c=1; c<=r; c++)
    printf("*");
  printf("\n"); }
 for(r=1; r<=(n/2); r++) {
  for(c=r; c<=n/2; c++)
    printf("*");
  printf("\n"); }
	return 0; }