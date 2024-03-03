#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a+b <= c  || a+c <= b || b+c<=a){
        printf("Cannot form a triangle"); }
    else {
        if ((a*a+b*b)<(c*c)){
            printf("Obtuse triangle"); }
        else {
            printf("Not Obtuse Triangle"); } }
	return 0; }