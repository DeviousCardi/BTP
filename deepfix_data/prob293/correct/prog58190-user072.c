#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d%d%d", &a,&b,&c);
	if((a*a)+(b*b)<(c*c)){
	    printf("Obtuse Triangle"); }
	else if(a*a+b*b>=c*c){
	    printf("Not Obtuse Triangle"); }
	else{
	    printf("Cannot form a Triangle"); }
	return 0; }