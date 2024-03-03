#include <stdio.h>
#include <math.h>
int main() {
	int a,b ,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c){
	    if(a*a+b*b<c*c){
	        printf("Obtuse Triangle \n"); }
	    else {
	        printf("Not Obtuse Triangle \n"); } }
	else{printf("Cannot form a Triangle \n");}
	return 0; }