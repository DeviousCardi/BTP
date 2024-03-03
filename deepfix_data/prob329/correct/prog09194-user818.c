#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if((a<=b+c)||(c<=b+a)||(b<=a+c)||(a==0)||(b==0)||(c==0)) {
	printf("Cannot form a Triangle"); }
    if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b)) {
    printf("Right Triangle"); }
    else {
    printf("Not Right Triangle"); }
	return 0; }