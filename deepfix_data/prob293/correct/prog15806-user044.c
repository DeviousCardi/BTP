#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if(a+b==c || b+c==a || c+a==b) {
	        printf("Cannot form a Tringle"); }
	else {
	      if(a*a+b*b<c*c || a*a+c*c<b*b || c*c+b*b<a*a) {
	          printf("Obtuse Tringle"); }
	      else
	        printf("Not Obtuse Tringle"); }
	return 0; }