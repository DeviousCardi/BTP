#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c, temp;
	temp = 0;
	if (a >=b && a >= c) {
	    temp = c;
	    c = a;
	    a = temp; }
	scanf("%d %d %d", &a, &b, &c);
	if (a + b <= c) {
	    printf("Cannot form a Triangle \n"); }
	else {
	    if (( (a*a) + (b*b)) == (c*c)) {
	        printf("Right Triangle\n"); }
	    else {
	        printf("%d %d %d Not Right Triangle\n", c, a, b); } }
	return 0; }