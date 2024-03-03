#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d", &n);
    for(i=1;i<=2*n;i=i+2) {
        for(j=1;j<=n;j++) {
            if((j<=(n-i)/2)||(j>(n+i)/2))
            printf(" ");
            else
            printf("%d",j%10); }
        printf("\n"); }
return 0; }