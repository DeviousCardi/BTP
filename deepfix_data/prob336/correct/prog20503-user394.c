#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if((a>0)&&(b>0)&&(c>0)&&(a+b>c)||(b+c>a)||(c+a>b)){
	    if((a*a+b*b>c*c)||(b*b+c*c>a*a)||(c*c+a*a>b*b)){printf("Acute Triangle");}
	    else{printf("Not Acute Triangle");} }
	else{printf("Cannot form a Triangle");}
	return 0; }