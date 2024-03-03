#include <stdio.h>
int main() {
    int x1,y1,x2,y2,x3,y3;
    int p,q,r;
    scanf("%d,%d %d,%d %d,%d",&x1,&y1,&x2,&y2,&x3,&y3);
    p=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    q=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
    r=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
     if(p>=(q+r)){
        if((y1-y3==0)||(x1-x3==0)){
            printf("Point is on the rectangle"); }
        else{
            printf("Point is inside the rectangle"); } }
    else{
        printf("point is outside the rectangle"); }
	return 0; }