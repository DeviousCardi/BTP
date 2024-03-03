#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a>b) {
	    if(a>c) {
	        if(a>=(b+c))
	        printf("Cannot form a Triangle");
	        else if(b*b+c*c<a*a)
	        printf("Obtuse Triangle");
	        else
	        printf("Not Obtuse Triangle"); }
	    else {
	        if(c>=(b+a))
	        printf("Cannot form a Triangle");
	        else if(b*b+a*a<c*c)
	        printf("Obtuse Triangle");
	        else
	        printf("Not Obtuse Triangle"); } }
	else {
	    if(b>c) {
	        if(b>=(a+c))
	        printf("Cannot form a Triangle");
	        else if(a*a+c*c<b*b)
	        printf("Obtuse Triangle");
	        else
	        printf("Not Obtuse Triangle"); }
	    else {
	        if(c>=(b+a))
	        printf("Cannot form a Triangle");
	        else if(b*b+a*a<c*c)
	        printf("Obtuse Triangle");
	        else
	        printf("Not Obtuse Triangle"); } }
	return 0; }