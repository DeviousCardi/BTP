#include <stdio.h>
int main(){
    float x1, x2, y1, y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    float slope;
    if((x2 - x1) == 0){
        printf("inf");
    }else{
        slope = ((y2 - y1) / (x2 - x1));
        printf("%.2f", slope); }
    return 0; }