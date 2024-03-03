#include<stdio.h>
int main() {
    int h,i,j;
    scanf("%d",&h);
    {for(i=1;i<=(2*h-1);i=i+1)
      printf("*");
      printf("\n"); }
    for(j=1;j<=h;j=j+1)
     if(j==i||j==h-i)
      printf("*");
     else
     printf(" ");
return 0; }