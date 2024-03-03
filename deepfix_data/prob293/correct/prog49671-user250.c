#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a+b)>c){
	    if(((a*a)+(b*b))<(c*c))
	        {printf("Obtuse Triangle");}
	    else{printf("Not Obtuse Triangle ");} }
	else {printf("Cannot form a Triangle");}
	return 0; }