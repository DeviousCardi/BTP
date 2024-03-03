#include <stdio.h>
#include <stdlib.h>
int main() {
    int rows,i,j,space;
    scanf("%d",&rows);
    for(i=rows;i>=1;--i) {
        for(space=0;space<rows-i;++space)
           printf("  ");
        for(j=i;j<=2*i-1;++j)
          printf("* ");
        for(j=0;j<i-1;++j)
            printf("* ");
        printf("\n");}
    int h,k=0;
    scanf("%d",&rows);
    for(h=2;h<=rows;++h) {
        for(space=1;space<=rows-h;++space) {
           printf("  "); }
        while(k!=2*h-1) {
           printf("* ");
           ++k; }
        k=0;
        printf("\n"); }
    return 0; }