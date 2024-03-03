#include <stdio.h>
int main(){
    float x1,y1,x2,y2;
    float slope;
    scanf("%f %f",&x1,&y1);
    scanf("%f %f",&x2,&y2);
    slope=(y1-y2)/(x1-x2);
    printf("%.2f",slope);
    if(x2-x1==0)
     printf("inf");
    return 0; }