#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if ((x+y<=z) || (y+z<=x) || (z+x<=y))
    {printf("Cannot form a Triangle");}
    else if ((x*x+y*y<=z*z) || (y*y+z*z<=x*x) || (z*z+x*x<=y*y))
    {printf("Not Acute Triangle");}
    else {printf("Acute Triangle");}
	return 0; }