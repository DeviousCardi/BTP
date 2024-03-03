#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
    if(x+y>=z && y+z>=x && z+x>=y)
       if(x*x+y*y>z*z && y*y+z*z>x*x && z*z+x*x>y*y)
	        printf("Acute Triangle");
	   else
	        printf("Not Acute Triangle");
	else
	        printf("Cannot form a Triangle");
	return 0; }