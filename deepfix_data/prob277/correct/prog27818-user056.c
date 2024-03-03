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
 b++;  }
 for(i=1;i<=k;i++)
 printf(" ");
 printf("*");
 int c=1;
 while(c<=k)
 {for(i=k-1;i<=1;i--)
 printf(" ");
 for(i=2;i<=n;i++)
 printf("*");}
    return 0; }