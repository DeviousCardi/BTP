#include <stdio.h>
int main() {
    float x1,x2,y1,y2;
    float slope;
    scanf("%f %f\n",&x1,&y1);
    scanf("%f %f",&x2,&y2);
    if(x1<=100 && x2<=100 && y1<=100 && y2<=100 && x1>=-100 && y1>=-100      && x2>=-100 && y2>=-100 && (x1!=x2 || y1!=y2) ) {
        if((x2-x1)!=0) {
          slope=(y2-y1)/(x2-x1);
          printf("%.2f",slope); }
        else
          printf("inf"); }
    return 0; }