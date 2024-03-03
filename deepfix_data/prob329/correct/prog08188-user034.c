#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,f,g,max,triangle;
	scanf("%d%d%d",&a,&b,&c);
	if(a>c){
	    if(a>b){
	        triangle=b+c-a;
	        max=a; }
	    else{
	        triangle=a+c-b;
	        max=b; } }
	else{
	    if(c>b){
	        triangle=a+b-c;
	        max=c; }
	    else{
	        triangle=a+c-b;
	        max=b; } }
	if (triangle>0){
	    f=a*a+b*b+c*c;
	    g=f-max*max*2;
	    if (g==0){
	        printf("Right Triangle"); }
	    else {printf("Not Right Triangle");} }
	else{printf("Cannot form a Triangle");}
	return 0; }