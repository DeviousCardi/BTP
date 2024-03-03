#include <stdio.h>
#include <stdlib.h>
int main() {
int rows,i,j,space;
    scanf("%d",&rows);
    for(i=rows-1;i>=1;--i) {
        for(space=0;space<rows-i;++space)
           printf("  ");
        for(j=i;j<=2*i-1;++j)
          printf("*");
        for(j=0;j<i-1;++j)
            printf ("* ");
        printf("\n"); }
     int k=0;
    scanf("%d",&rows);
    for(i=1;i<=rows-1;++i) {
        for(space=1;space<=rows-i;++space) {
           printf("  "); }
        while(k!=2*i-1) {
           printf("*");
           ++k; }
        k=0;
        printf("\n"); }
    return 0; }