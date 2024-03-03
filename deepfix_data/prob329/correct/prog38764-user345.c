#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c, temp;
	temp = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a >=b && a >= c) {
	    temp = c;
	    c = a;
	    a = temp; }
	else {
	    if (b >= a && b >=c){
	        temp = c;
	        c = b;
	        b = temp; } }
	if (a + b <= c) {
	    printf("Cannot form a Triangle \n"); }
	else {
	    if (( (a*a) + (b*b)) == (c*c)) {
	        printf("Right Triangle\n"); }
	    else {
	        printf("Not Right Triangle\n"); } }
	return 0; }