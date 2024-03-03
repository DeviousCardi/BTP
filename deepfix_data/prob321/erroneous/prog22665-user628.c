#include <stdio.h>
int main(){
    float x1,x2,y1,y2;
    float s;
    scanf("%f %f\n%f %f",&x1,&y1,&x2,&y2);
    float X=x2-x1
    if (X!=0) {
        printf("inf"); }
    else {
        s=(y2-y1)/(x2-x1);
        printf("%f",s); }
    return 0; }