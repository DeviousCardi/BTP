#include <stdio.h>
#include <stdlib.h>
int i=0;double s=0;
double c (){
    if(i>10000)return 0;
    i++;
    s=(2*c()/(2+c()) +2)*2/(2*c()/(2+c()) +4);
    return s; }
int main() {
    c();
printf("%lf",s);
	return 0; }