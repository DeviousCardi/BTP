#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d""%d""%d",&a,&b,&c);
if (((a!=0)&&(b!=0)&&(c!=0))) {
    if ((b*b)==((c*c)+(a*a)))
    printf("right angle triangle");
    else printf("not right angle triangle"); }
else {
    printf("cannot form a triangle"); }
	return 0; }