#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    scanf("%d %d\n%d %d",&x1,&y1,&x2,&y2);
    if(x2-x1==0)
    printf("inf");
    else
   { float a=y2-y1;
    float b=x2-x1
    float slope=a/b;
    printf("%.2f",slope);}
    return 0; }