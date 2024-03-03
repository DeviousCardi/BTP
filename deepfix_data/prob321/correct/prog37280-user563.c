#include <stdio.h>
int main(){
    float x1,x2,y1,y2;
    scanf ("%f",&x1);
    scanf ("%f",&y1);
    scanf ("%f",&x2);
    scanf ("%f",&y2);
    if(x1==x2)
    printf("inf");
    else
    printf("%.2f",((y2-y1)/(x2-x1)));
    return 0; }