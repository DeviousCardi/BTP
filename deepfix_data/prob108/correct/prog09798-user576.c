#include <stdio.h>
#include <stdlib.h>
int main() {
 int h;
 scanf("%d",&h);
    int i,j,k;
    for(i=1;i<=(h+1)/2;i++) {
        for(j=1;j<=i;j++) {
            if((i==3)&&(j==2))
    printf("\n");
    else
         printf("*"); }
    printf("\n"); }
   for(i=(h-1)/2;i>=1;i--) {
        for(k=1;k<=i;k++) {
             printf("*"); }
    printf("\n"); }
 return 0; }