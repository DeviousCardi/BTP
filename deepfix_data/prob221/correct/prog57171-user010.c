#include<stdio.h>
#include<stdlib.h>
int main() {
 int n,i,j,space;
 scanf("%d", &n);
 printf("\n*\n");
 for(i=1; i<=n; i++) {
  printf("*");
  for(space=1; space<i; space++)
    printf(" ");
  printf("*\n"); }
 for(j=1; j<=n+2; j++)
   printf("*");
 return 0; }