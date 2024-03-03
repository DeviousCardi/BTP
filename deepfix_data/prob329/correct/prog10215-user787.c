#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d""%d""%d",&a,&b,&c);
	if(a*a==b*b+c*c | b*b==a*a+c*c | c*c==a*a+b*b){
	    printf("Right Triangle"); }
	    else if(a>b+c| b>a+c | c>a+b){
	        printf("Cannot form a Triangle"); }
	        else {
	        printf("Not Right Trianlgle"); }
	return 0; }