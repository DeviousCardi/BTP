#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float a,b;
    float m;
    scanf("%d  %d\n%d  %d",&x1,&y1,&x2,&y2);
    a=y2-y1;
    b=x2-x1;
    m=a/b;
      if(b!=0)
    printf("%.2f",m);
    else
    printf("inf");
    return 0; }