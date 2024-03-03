#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a,b,c ;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b)) {
        if ((a*a+b*b)<(c*c))
        printf ("obtuse triangle\n");
         else { printf("not obtuse triangle"); } }
    if ((a+b)<c);
    printf ("cannot form a triangle");
	return 0; }