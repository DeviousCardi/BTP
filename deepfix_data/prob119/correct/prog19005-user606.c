#include <stdio.h>
#include <stdlib.h>
int i=0;double s=0;
double c (){
   if(i>3)return 0;
   printf("%d",i);
    i++;
    return  (2*c()/(2+c()) +2)*2/(2*c()/(2+c()) +4); }
int main() {
   s= c();
	return 0; }