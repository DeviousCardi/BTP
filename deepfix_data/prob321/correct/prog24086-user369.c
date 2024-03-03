#include <stdio.h>
int main() {
    float x1,x2,y1,y2,m;
    scanf("%f %f",&x1,&y1);
    scanf("%f %f",&x2,&y2);
     if(x1==x2)
    printf("inf");
     else
    { m=(y2-y1)/(x2-x1);
      printf("%.2f",m); }
    return 0; }