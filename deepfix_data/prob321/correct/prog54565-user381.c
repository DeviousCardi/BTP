#include <stdio.h>
int main(){
     int  x1,x2;
     int y1,y2;
     float m ;
     scanf("%d  %d",&x1,&y1);
     scanf("%d  %d\n",&x2,&y2);
     m=(y2-y1)/(x2-x1);
     if(x2-x1==0)
     printf("inf");
     else
     printf("%.2f",m);
    return 0; }