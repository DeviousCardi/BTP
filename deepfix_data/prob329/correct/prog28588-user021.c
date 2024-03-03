#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	if((a*a+c*c)==(b*b)){
	    printf("Right Triangle"); }
	else{
	    if(a+c>=b){
	        printf("Not Right Triangle"); }
	    else {
	        printf("Cannot form a Triangle"); } }
	return 0; }