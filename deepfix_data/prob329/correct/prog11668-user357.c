#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (c*c)+(b*b)==(a*a)) {
printf("Right Tringle"); }
else if(a+b>c||b+c>a||a+c>b) {
    printf("Not Right Tringle"); }
 return 0; }