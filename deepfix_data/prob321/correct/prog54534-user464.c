#include <stdio.h>
int main(){
 int x1,x2,y1,y2,p=7;
 float m;
 scanf("%d  %d  %d  %d",&x1,&y1,&x2,&y2);
 if((x1>=-100&&x1<=100)&&(x2>=-100&&x2<=100)&&(y1>=-100&&y1<=100)&&(y2>=-100&&y2<=100)){
 m=((y2-y1)*1.0)/(x2-x1);}
 if(m==p/0) printf("inf");
 else
 printf("%.2f",m);
    return 0; }