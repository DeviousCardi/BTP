#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++) {
    for(j=1;j<=5-i;j++) {
        printf(" ",j); }
 for(j=1;j<=2*i-1;j++) {
        printf("*",j); } }
  printf("\n");
    return 0; }