#include<stdio.h>
#include<stdlib.h>
int main() {
 int num,r,j,sp;
 scanf("%d", &num);
 printf("\n*\n");
 for(r=1; r<=num; r++) {
  printf("*");
  for(sp=1; sp<r; sp++)
    printf(" ");
  printf("*\n"); }
 for(j=1; j<=num+2; j++)
   printf("*");
 return 0; }