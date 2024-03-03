#include <stdio.h>
int main(){
 int n, sum=0, i, j;
 scanf ("%d", &n);
 for (i=0; i<4; i++) {
     sum = sum + n%10;
     n=n/10; }
 for (j=2016;;j++) {
     if (j%sum==0) {
         printf("%d", j);
         break; }
     else continue; }
    return 0; }