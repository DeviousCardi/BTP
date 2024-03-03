#include <stdio.h>
#include <stdlib.h>
int main() {
    int x;
    int y;
    int z;
    scanf("%d%d%d",&x,&y,&z);
    if(((x*x + y*y) == (z*z)) || ((x*x + z*z) == (y*y)) || ((y*y + z*z) == (x*x))){
        printf("Right Triangle"); }
    else if(((x + y) <= (z)) || ((y + z) <= (x)) || ((z + x) <= (y))){
        printf("Cannot form a Triangle"); }
    else{
        printf("Not Right Triangle"); }
	return 0; }