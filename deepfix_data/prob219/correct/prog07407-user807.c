#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&y>z)
    printf("%d",y);
    if(y>x&&x>z)
    printf("%d",x);
    if(x>z&&z>y)
    printf("%d",z);
    if((x==y)&&y>z)
    printf("%d",z);
    if((y==z)&&z>x)
    printf("%d",x);
    if((x==z)&&z>y)
    printf("%d",y);
	return 0; }