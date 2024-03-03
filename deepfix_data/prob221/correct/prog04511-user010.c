#include<stdio.h>
#include<stdlib.h>
int main() {
 int n,i,j,space;
 scanf("%d", &n);
 for(i=1; i<=n; i++)
   printf("*");
  for(space=1; space<i; space++)
    printf(" ");
 for(j=1; j<=n; j++) {
  printf("*");
  printf("\n*\n");
  printf("*\n"); }
 return 0; }