#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c) {
        if((c*c==b*b+a*a)) {
             printf("Right Triangle"); }
        else {
             printf("Not Right Triangle"); } }
    else {
	printf("Cannot form a Triangle"); }
	return 0; }