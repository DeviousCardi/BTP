#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 if((a*a+b*b)>=c*c) {
     printf("Not Obtuse Triangle")             ; }
  if((a*a+b*b)<c*c) {
      printf("Obtuse Triangle"); }
  if((a+b)<c) {
      printf("Cannot form a Triangle"); }
	return 0; }