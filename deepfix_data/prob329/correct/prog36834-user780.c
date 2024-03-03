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
    if(a+b>c) {
     if(a*a+b*b==c*c) {
         printf("Right Triangle");
              }}
     else if(a+b<=c)
     printf("Cannot form a Triangle");
    else if(a+b>c)
    printf("Not Right Triangle");
    return 0; }