#include <stdio.h>
#include <stdlib.h>
double i=0;double s=0;
double c (){
   if(i>1){ return 10000000;}
    i++;
    return  (2*c()/(2+c()) +2)*2/(2*c()/(2+c()) +4); }
int main() {
   s= c();
   printf("%lf",s);
	return 0; }