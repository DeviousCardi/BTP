#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",& a,&b,&c);
	if((a+b)>c && (b+c)>a && (c+a)>b){
	    printf("form a triangle"); }
	if((pow(a,2)+pow(b,2))>pow(c,2)) {
	    printf("acute triangle"); }
	else{
	    printf("not acute triangle"); } }
else{
    printf("not form a triangle"); }
	return 0; }