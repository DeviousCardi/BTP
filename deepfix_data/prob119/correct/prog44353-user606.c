#include <stdio.h>
#include <stdlib.h>
int i=0;double s=0;
double c (){
   if(i>0){printf("%d\n",i);return 0;}
    i++;
    return  (2*c()/(2+c()) +2)*2/(2*c()/(2+c()) +4); }
int main() {
   s= c();
	return 0; }