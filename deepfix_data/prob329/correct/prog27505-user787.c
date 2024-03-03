#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d""%d""%d",&a,&b,&c);
	if((a>b && a>c && a*a==b*b+c*c)||(b>a && b>c && b*b==a*a+c*c)||(c>a && c>b && c*c==a*a+b*b)){
	    printf("Right Triangle"); }
else if((a>b && a>c && a>b+c)||(b>a && b>c && b>a+c)||(c>a && c>b && c>a+b)){
    printf("Cannot form a Triangle"); }
else{
    printf("Not Right Triangle"); }
	return 0; }