#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a*a+b*b<c)*(c*c)){
    printf("OBTUSE"); }
    else {
    printf("NOT OBTUSE"); }
    if (a+b <= c  || a+c <= b || b+c<=a){
    printf("CANNOT FORM A TRIANGLE"); }
	return 0; }