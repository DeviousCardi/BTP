#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b <= c) {
	    printf("Cannot form a triangle \n"); }
	else {
	    if (( (a*a) + (b*b)) == (c*c)) {
	        printf("Right Triangle\n"); }
	    else {
	        printf("Not Right Triangle\n"); } }
	return 0; }