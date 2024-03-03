#include <stdio.h>
int main() {
 int i,n,d;
 scanf("%d",&n);
 int a[n];
 n=n*2;
 while(n--) {
       if(n%2==0)
       a[n]=' ';
       else
       a[n]=getchar(); }
   printf("%d",a[2]);
    return 0; }