#include <stdio.h>
#include <stdlib.h>
int main() {
   int a, b, c, m, n, o;
   scanf("%d %d %d",&a, &b, &c);
   if(a>b&&a>c) {
       m=a; n=b; o=c; }
    else if(b>c&&b>a) {
       m=b; n=c; o=a; }
      else {
       m=c; n=a; o=c; }
    if(m>=n+o) {
       printf("Cannot form a Triangle"); }
   else if(m*m<n*n+o*o) {
       printf("Acute Triangle"); }
   else {
       printf("Not Acute Triangle"); }
	return 0; }