#include <stdio.h>
#include <stdlib.h>
int main() {
	int a; int b; int c;
	scanf("%d%d%d",&a,&b,&c);
            if ((a+b)<(c)){
	        printf("Cannot form a triangle"); }
            else if((a*a)+(b*b)<(c*c)) {
	        printf("Obtuse Triangle"); }
	        else
	        { printf("not obtuse triangle"); }
	return 0; }