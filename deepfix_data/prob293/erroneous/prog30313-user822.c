#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(c+a>b)) {
        if(a*a+b*b<c*c||b*b+c*c<a*a||c*c+a*a<b*b) {
            printf("Obtuse triangle."); }
        else {
            printf("Not Obtuse Triangle."); } }
    else {
        printf("The numbers cannot form a triangle.") }
	return 0; }