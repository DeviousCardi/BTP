#include<stdio.h>
#include<stdlib.h>
int main() {
 int n,i,j,space;
 scanf("%d", &n);
 for(j=1; j<=n; j++) {
  printf("*");
  printf("\n*\n");
  for(space=1; space<j; space++)
    printf(" ");
  printf("*\n"); }
 for(j=1; j<=n+2; j++)
   printf("*");
 return 0; }