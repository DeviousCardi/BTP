#include <stdio.h>
#include <stdlib.h>
double s=0;
double c (double n){
    if(n==0)return 10000;
   return ((2*c(n-1)/(2+c(n-1)) +2)*2)/((2*c(n-1)/(2+c(n-1)) +2)+2); }
int main() {
   s= c(20);
   printf("%lf",s);
	return 0; }