#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
  if(a>=b&&b>=c) {
      printf("%d",b); }
 if(a>=c&&c>=b) {
      printf("%d",c); }
 if(b>=a&&a>=c) {
      printf("%d",a); }
 if(b>=c&&c>=a) {
      printf("%d",c); }
   if(c>=a&&a>=b) {
      printf("%d",a); }
   if(c>=b&&b>=a) {
      printf("%d",b); }
	return 0; }