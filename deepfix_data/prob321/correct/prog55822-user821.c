#include <stdio.h>
int main(){
    float x1,y1,x2,y2;
    float m;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
     m=(y2-y1)/(x2-x1);
    if((-100<=x1 && x1<=100) && (-100<=y1 && y1<=100)  && (-100<=x2 && x2<=100)  && (-100<=y2 && y2<=100) && (x1!=x2 && y1!=y2)) {
          printf("%.2f",m); }
    else if(x1==x2) {
        printf("inf"); }
     return 0; }