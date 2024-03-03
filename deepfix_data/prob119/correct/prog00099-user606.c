#include <stdio.h>
#include <stdlib.h>
int i=0;double s=0;
double c (){
    if(i>2){printf("yo\n");return 0;}
    else {i++;
    return  (2*c()/(2+c()) +2)*2/(2*c()/(2+c()) +4);} }
int main() {
   s= c();
	return 0; }