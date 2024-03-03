#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(((x!<(y+z))||(y!<(x+z))||(y!<(x+z)))||(x||y||z==0))
    {printf("Cannot form a Triangle");}
    else {
    if( (x*x==y*y+z*z) || (y*y==x*x+z*z) || (z*z==x*x+y*y) )
    printf("Right Triangle");
    else
    printf("Not Right Triangle"); }
	return 0; }