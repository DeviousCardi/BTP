#include <stdio.h>
#include <stdlib.h>
int main() {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
 int temp;
if(a>b) {
     temp =a;
     a=b;b=temp; }
     if(b>c) {
         temp=c;c=b;b=temp; }
     if(a>b) {
     temp =a;
     a=b;b=temp; }
     if(a*a+b*b==c*c) {
         printf("triangle is RIGHT ANGLE"); }
     else if(a+b<=c)
     printf("triangle is NOT POSSIBLE");
    else if(a+b>c)
    printf("triangle is not a RIGHT TRIANGLE");
    return 0; }