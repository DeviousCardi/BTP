#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 if((a+b<=c)||(b+c<=a)||(c+a<=b)||(a==0)||(b==0)||(c==0)) {
     printf("Cannot form a triangle");}
 else if((a*a+b*b)>c*c) {
     printf("Not Obtuse Triangle")             ; }
  else  {
      printf("Obtuse Triangle"); }
	return 0; }