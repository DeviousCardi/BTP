#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf ("%d%d%d",&a,&b,&c);
	if(a*a+b*b==c*c){
	    printf("RIGHT TRIANGLE");}
else if (a*a+b*b!=c*c){
    printf("NOT RIGHT TRIANGLE");}
    else if (a+b<=c){
        printf("Cannot form a triangle");}
	return 0; }