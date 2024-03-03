#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i;
    scanf("%d",&n);
    int k;
    k=(n-1)/2;
int b;
b=1;
    while(b<=k) {
        for(i=n;i<=1;i--)
        printf("*");
        printf("\n");
 ++b;  }
    return 0; }