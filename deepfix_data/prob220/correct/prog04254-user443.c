#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=(n-1);i++){printf(" ");} printf("*\n");
    for(i=1;i<=(n-2);i++) {
                      for(j=i;j<=(n-3);j++){printf(" ");}                                     printf("*");
                      for(j=(2*i);j>=2;j--){printf(" ");}
                      printf("*");
                  printf("\n"); }
    return 0;}