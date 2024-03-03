#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x+y>z && y+z>x && x+z>y) {
        if(x*x+y*y<z*z || x*x+z*z<y*y || y*y+z*z<x*x)
        printf("Obtuse Triangle");
        else
        printf("Not Obtuse Triangle"); }
    else
    printf("Cannot form any Triangle");
	return 0; }