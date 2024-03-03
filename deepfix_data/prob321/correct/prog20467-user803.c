#include <stdio.h>
int main(){
    float m;
    int x1,x2,y1,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    float x,y;
    x=(x2-x1)*0.01;
    y=(y2-y1)*0.01;
    if(x==0)
     {printf("inf");}
    else
     {m=y/x;
      printf("%.2f",m);}
    return 0; }