#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
        scanf("%d %d\n",&x1,&y1);
        scanf("%d %d",&x2,&y2);
    float slope;
        float x=(float)(x1-x2);
        float y=(float)(y1-y2);
        if (x==0.0)
          printf("inf");
        else {
          slope = y/x;
          printf("%.2f",slope); }
    return 0; }