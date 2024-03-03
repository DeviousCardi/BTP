#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a+b)>c){
	    if(((a*a)+(b*b))<(c*c)){
	        printf("Obtuse tringle") }
	    else{printf("Not obtuse triangle ") }
	else {printf("Cannot form triangle")}
	return 0; }