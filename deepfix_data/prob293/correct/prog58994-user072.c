#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d%d%d", &a,&b,&c);
	if((a+b)>c, a!=0,b!=0,c!=0){
	if((a*a+b*b)<(c*c)){
	    printf("Obtuse Triangle"); }
	else{
	    printf("Not Obtuse Triangle");
	}}
	else{
	    printf("Cannot form a Triangle"); }
	return 0; }