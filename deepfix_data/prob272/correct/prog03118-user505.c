#include <stdio.h>
int main() {
 int n,a1,a2;
 float T;
 scanf ("%d %d %d",&n,&a1,&a2);
 if (n==1) {
         T=a1;
         printf ("%d",a1); }
 else {
         if (n==2) {
             T=a2;
             printf("%d",a2); }
  if (n>2) {
          T= (n-1)+(n-2)-2 ;
          printf("%f",T); }
    return 0; } }