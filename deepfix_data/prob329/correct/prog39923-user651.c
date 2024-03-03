#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if(a>0 && b>0 && c>0) {
	if(c>a && c>b) {
	    if((a+b)<c)printf("Cannot form a triangle");
	    if(a*a + b*b == c*c)printf("Right Triangle");
	    else printf("Not Right Triangle"); }
	else if(b>a && b>c) {
	    if((a=c)<b)printf("Cannot form a triangle");
	    if(a*a + c*c == b*b)printf("Right triangle");
	    else printf("Not right triangle"); }
    else {
        if((b+c)<a)printf("cannot form a triangle");
        if (b*b + c*c == a*a)printf("Right Triangle");
        else printf("Not right triangle"); } }
	else printf("cannot form a right triangle");
	return 0; }