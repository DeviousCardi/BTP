#include<stdio.h>
int main() {
    int h,i,j,k;
    scanf("%d",&h);
    for(i=1;i<=(2*h-1);i=i+1)
      printf("*");
      printf("\n");
    {for(i=2;i<=h;i=i+1)
        for(j=1;j<=i-1;j=j+1)
          printf(" ");
          printf("*");
        for(k=1;k<=(2*h-1-2*i);k=k+1)
          printf(" ");
          printf("*");
    printf("\n"); }
return 0; }