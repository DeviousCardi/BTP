#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b)<c || (b+c)<a || (c+a)<b){
    printf("Cannot form a triangle"); }
    else { if ((a*a)+(b*b)<(c*c)|| (b*b)+(c*c)<(a*a)|| (a*a)+(c*c)<(b*b))
    {printf("Obtuse Triangle");}
    else {printf("Not Obtuse Triangle");} }
	return 0; }