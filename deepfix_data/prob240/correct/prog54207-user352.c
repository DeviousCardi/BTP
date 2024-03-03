#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0||n==1)
    return 1;
   int x=0;
   int i;
   for(i=0;i<n;i++) {
       x=x+(catalan(i)*catalan(n-i-1)); }
   return x; }
int main() {
    printf("%d",catalan(5));
    return 0; }