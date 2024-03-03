#include <stdio.h>
int main(){
 int n,a1,a2,T(n);
 scanf ("%d %d %d",&n,&a1,&a2);
 if (n=1) {
         T(n)=a1
         printf ("%d",a1); }
 else {
         if (n=2) {
             T(n)=a2
             printf("%d",a2); }
  if (n>2) {
          T(n)= T(n-1)+T(n-2)-2
          printf("%d",T(n)); }
    return 0; }