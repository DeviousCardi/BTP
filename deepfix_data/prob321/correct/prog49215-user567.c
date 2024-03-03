#include <stdio.h>
int main() {
    float x1,y1,x2,y2,z=0;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    if((x2-x1)==0) {
        printf("inf"); }
    else {
        z=(y2-y1)/(x2-x1);
        printf("%.2f",z); }
        return 0; }