#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    int b;
    int c;
    int d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>=c&&a>=b) {
        a=a;
        b=b;
        c=c; }
    else if(b>=a&&b>=c) {
        d=b;
        b=a;
        a=d; }
    else {
        d=c;
        c=a;
        a=d; }
      if(a*a==b*b+c*c) {
          printf("Right Triangle"); }
      else if(a>=(b+c)) {
          printf("Cannot form a triangle"); }
      else {
          printf("Not Right Triangle"); }
	return 0; }