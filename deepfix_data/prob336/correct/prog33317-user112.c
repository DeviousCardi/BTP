#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c && a<b+c){
	    if(a*a<b*b+c*c)
	    printf("Acute Triangle");
	    if(a*a>=b*b+c*c)
	    printf("Not Acute Triangle");}
	if(a>=b && a>=c && a>=b+c)
	printf("Cannot form a Triangle");
	if(b>a && b>=c && b<a+c){
	    if(b*b<a*a+c*c)
	    printf("Acute Triangle");
	    if(b*b>=a*a+c*c)
	    printf("Not Acute Triangle");}
	if(b>a && b>c && b>=a+c)
	    printf("Cannot form a Triangle");
	if(c>a && c>b && c<a+b){
	    if(c*c<a*a+b*b)
	    printf("Acute Triangle");
	    if(c*c>=a*a+b*b)
	    printf("Not Acute Triangle");}
	if(c>=a && c>=b && c>=a+b)
	     printf("Cannot form a Triangle");
	return 0; }