#include<stdio.h>
#include<stdlib.h>
int main() {
int i,j,k,n;
      scanf("%d",&n);
      printf("\n");
      for(i=1;i<2*(n-2);i++)
              printf(" ");
       printf("*\n");
       for(i=1;i<n-1;i++) {
              for(j=n-i;j>0;j--)
                      printf(" ");
              printf("*");
              for(k=0;k<2*i-1;k++)
                       printf(" ");
              printf("*\n"); }
     printf(" ");
     for(i=0;i<2*n-1;i++)
     printf("*");
     return 0; }