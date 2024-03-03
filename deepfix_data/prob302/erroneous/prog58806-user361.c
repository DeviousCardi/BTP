#include <stdio.h>
int main() {
    int x1,y1,x2,y2,x3,y3;
    int a,b,c;
    scanf("(%d%d)(%d%d)(%d%d)"x1,y1,x3,y3,x2,y2);
    a*a=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    b*b=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
    c*c=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
    if(a*a<b*b+c*c){
        printf("Point is outside the rectangle ") }
    else if(a*a>=b*b+c*c){
        if((y1-y3=0)||(x1-x3=0)){
            printf("Point is on the rectangle"); }
        else{
            printf("Point is inside the rectangle") } }
	return 0; }