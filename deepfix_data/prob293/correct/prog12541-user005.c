#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	switch (a,b,c){
	    case 1: (a*a +b*b -c*c)/2*a*b < 0 && (a*a +b*b -c*c)/2*a*b > -1; printf("Obtuse Triangle"); break;
	    case 2: (a*a +b*b -c*c)/2*a*b > 0 && (a*a +b*b -c*c)/2*a*b < 1; printf("Not Obtuse Triangle"); break;
	    default : printf ("Cannot form a Triangle"); }
	return 0; }