#include <stdio.h>
#include <stdlib.h>
int main() {
 int h;
 scanf("%d",&h);
    int i,j,k;
    for(i=1;i<=(h+1)/2;i++) {
        printf("*");
        for(j=1;j<=i;j++) {
         printf("\n"); }
    printf("\n"); }
   for(i=(h-1)/2;i>=1;i--) {
        printf("*");
        for(k=1;k<=i;k++) {
             printf("\n"); }
    printf("\n"); }
 return 0; }