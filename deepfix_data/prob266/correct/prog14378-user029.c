#include <stdio.h>
int main(){
 int  n,a,b=0;
 scanf("%d",&n);int c=n;
 while(n!=0) {
     a=n%10;
     b+=a;
     n=n/10; }
 while(c%b!=0) {
     c++; }
    printf("%d",c);
    return 0; }