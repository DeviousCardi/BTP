#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n;
    scanf("%d",&n);
    printf("*\n");
    for(i=1;i<=n;i++){
    for(i=1;i<=(n-1);i++){printf(" ");}
    for(i=2;i<=n;i=i+1){printf("*");}
      printf("\n");}
    for(i=1;i<=(2*n-1);i++){
        printf("*"); }
    return 0;}