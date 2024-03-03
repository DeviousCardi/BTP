#include<stdio.h>
int main() {
    int x,y,z;
   scanf("%d%d%d", &x,&y,&z);
    if (x + y <= z|| x+z<=y|| y+z<=x)
    {printf("INVALID");}
    else if((x*x) +(y*y) == (z*z)||(y*y) +(z*z) ==(x*x)|| (z*z) +(x*x) == (y*y))
    {printf("RIGHT");}
    else if(x>y&&x>z||y>x&&y>z|| z>x&&z>y)
    {printf("OBTUSE");    }
    else printf("ACUTE");
    return 0; }