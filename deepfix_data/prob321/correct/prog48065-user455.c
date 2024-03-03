#include <stdio.h>
int main(){
    float x1,y1;
    float x2,y2;
    float m;
    scanf("%f %f\n",&x1,&y1);
    scanf("%f %f",&x2,&y2);
    m=(y2-y1)/(x2-x1);
    if(x1==x2)
    printf("inf");
    else
    printf("%0.2f",m);
    return 0; }