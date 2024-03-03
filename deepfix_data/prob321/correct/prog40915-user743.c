#include <stdio.h>
int main(){
    float x1,y1,x2,y2,slope;
    scanf("%f  %f  %f  %f",&x1,&y1,&x2,&y2);
    printf("%f  %f",x1,y1);
    printf("%f  %f",x2,y1);
    if(x2==x1) { }
    if(x2!=x1) {
    slope=(y2-y1)/(x2-x1); }
    return 0; }