#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
if((a+b)<=c||(b+c)<=a||(a+c)<=b) {
    printf("Cannot form a Triangle"); }
else if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (c*c)+(b*b)==(a*a)) {
printf("Right Triangle"); }
else {
    printf("Cannot form a Triangle"); }
 return 0; }