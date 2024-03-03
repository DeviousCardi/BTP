#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,space;
    scanf("%d",&n);
    for(i=n;i>=1;--i) {
        for(space=0;space<(n-1)/2-i;++space)
           printf("  ");
        for(j=i-1;j<=2*i-1;++j)
          printf("*");
        for(j=1;j<i-1;++j)
            printf ("*");
        printf("\n"); }
     int k=0;
    scanf("%d",&n);
    for(i=1;i<=n-1;++i) {
        for(space=1;space<=(n-1)/2-i;++space) {
           printf("  "); }
        while(k!=2*i-1) {
           printf ("*");
           ++k; }
        k=0;
        printf("\n"); }
    return 0; }