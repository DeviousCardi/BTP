#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)>c&&(b+c)>a&&(c+a)>b) {
	    int sa=a*a;
	    int sb=b*b;
	    int sc=c*c;
	    if((sa+sb)==sc||(sa+sc)==sb||(sb+sc)==sa) {
	    printf("Right Triangle"); }
	    else {
	    printf("Not right Triangle"); } }
	else {
	    printf("Cannot form a Triangle"); }
	return 0; }