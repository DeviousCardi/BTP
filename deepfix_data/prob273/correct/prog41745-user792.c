#include <stdio.h>
#include <stdlib.h>
# include <math.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=((n+1)/2);j++) {
            if(j<=abs(((n+1)/2)-j))
            printf(" ");
            else
            printf("%d",i); }
        printf("\n"); }
return 0; }