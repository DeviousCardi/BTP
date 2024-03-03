#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i;
    scanf("%d",&n);
    int k;
    k=(n-1)/2;
    int b;
    b=1;
    int s;
  for (s=0;s<=k-1;s++)
   {int z;
   for(z=0;z<=(n-1)/2-1;z++)
   printf(" ");
   for(b=n;b<=1;b--)
   printf("*");
   printf("/n");
    i=1;
    for(i=1;i<=k;i++) {
        printf(" "); }
    printf(" *");
    int c=1;
     for(c=1;c<=k;c++) {
        for(i=k-1;i<=1;i--) {
                printf(" "); }
        for(i=2;i<=n;i++) {
                printf("*"); } }
    return 0;
}}