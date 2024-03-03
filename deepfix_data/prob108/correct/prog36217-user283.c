#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,sp;
    scanf("%d",&n);
    for(i=1; i<=(n/2)+1; i++) {
        for(j=1; j<=i; j++)
        printf("*");
        for(sp=1; sp<i; sp++)
    printf(" ");
  printf("*\n");
        printf("\n"); }
    for(i=1; i<=(n/2); i++) {
        for(j=i; j<=n/2; j++)
        printf("*");
        for(sp=1; sp<i; sp++)
    printf(" ");
  printf("*\n");
        printf("\n"); }
    return 0; }