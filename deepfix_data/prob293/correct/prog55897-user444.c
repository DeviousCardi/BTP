#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && b+c>a && c+a>b) {
	    if(a*a+b*b<c*c || c*c+b*b<a*a || a*a*+c*c<a*a) {
	        printf("Obtuse Triangle"); }
	    else {
            printf("Obtuse Triangle"); } }
	else {
	    printf("Obtuse Triangle"); }
	return 0; }