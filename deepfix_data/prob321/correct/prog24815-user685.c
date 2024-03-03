#include <stdio.h>
int main(){
    float x1,x2,y1,y2;
    float m;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    if(x2-x1!=0){
    m=(y2-y1)/(x2-x1);
    printf("%.2f",m); }
    else
    printf("inf");
    return 0; }