#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b)||(a!=0)||(b!=0)||(c!=0)) {
    printf("Right Triangle"); }
    else if((a>b+c)||(b>a+c)||(c>b+a)||(a==0)||(b==0)||(c==0)) {
	printf("Cannot form a Triangle"); }
    else {
    printf("Not Right Triangle"); }
	return 0; }