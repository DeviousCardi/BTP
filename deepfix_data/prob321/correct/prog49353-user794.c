#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float x,y,s;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
     x=x1-x2;
     y=y1-y2;
     s=y/x;
    if(x==0)printf("inf");
    else{printf("%.2f",s);}
    return 0; }