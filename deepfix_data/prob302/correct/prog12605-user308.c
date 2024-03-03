#include <stdio.h>
int main() {
    float a1,a2,b1,b2,c1,c2;
    scanf("%f%f%f%f%f%f",&a1,&a2,&b1,&b2,&c1,&c2);
    if(a1==b1 && a2==b1){printf("point is inside the rectangle");}
    else if(a1==b2 && b1==b2){printf("point is inside the rectangle");}
    else if(a1==c1 && a2==c1){printf("point is on the rectangle");}
	return 0; }