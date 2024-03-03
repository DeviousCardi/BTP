#include <stdio.h>
int main(){
    float x1,y1,x2,y2;
    float slope;
    scanf("%f",&x1);
    scanf("%f",&y1);
    scanf("%f",&x2);
    scanf("%f",&y2);
    if((x2-x1)!=0) {
        slope=(y2-y1)/(x2-x1);
        printf("%.2f",slope); }
    else {
        printf("inf"); }
    return 0; }