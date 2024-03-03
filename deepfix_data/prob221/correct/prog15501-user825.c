#include<stdio.h>
int main() {
    int h,i,j,k;
    scanf("%d",&h); {
      for(i=1;i<=(2*h-1);i=i+1)
      printf("*");
      printf("\n");
  for(j=1;j<=(i-1);j=j+1)
    { printf(" ");}
     printf("*");
  for(k=j;k<=(2*h-1-j);k=k+1)
     {printf(" ");}
     printf("*");
   printf("\n"); }
   return 0; }