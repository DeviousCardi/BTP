#include <stdio.h>
#include <stdlib.h>
double s=0,i=12;
double c (int r){
    if(i==0)return 10000;
    i--;
   return ((2*c(r-1)/(2+c(r-1)) +2)*2)/((2*c(r-1)/(2+c(r-1)) +2)+2); }
int main() {
   s= c(12);
   printf("%lf",s);
	return 0; }