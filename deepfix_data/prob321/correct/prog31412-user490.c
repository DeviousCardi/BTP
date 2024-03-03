#include <stdio.h>
int main(){
    float x1,y1,x2,y2;
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
    float m;
    m=(y2-y1)/(x2-x1);
    if(x2==x1){
        printf("inf"); }
    else {
        printf("%.2f",m); }
    return 0; }