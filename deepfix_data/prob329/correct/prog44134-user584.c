#include <stdio.h>
#include <stdlib.h>
    int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c||b+c>a||a+c>b){
	if((a*a+b*b)==(c*c)){
	printf("right triangle");
	} else{
	printf("not right triangle"); }
    }else{
    printf("cannot form atriangle"); }
    return 0; }