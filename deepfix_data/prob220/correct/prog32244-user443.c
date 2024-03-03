#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for(i=i;i<=(n-1);i++){printf(" ");}
      printf("*\n");}
    for(i=1;i<=(2*n-1);i++){
        printf("*"); }
    return 0;}