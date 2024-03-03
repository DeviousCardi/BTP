#include <stdio.h>
int main(){
int x1,y1,x2,y2 ;
-100<=x1,x2,y1,y2<=100;
scanf("%d  %d /n %d  %d",&x1,&y1,&x2,&y2);
if(x2!=x1)
{float slp;
slp=(y2-y1)/(x2-x1)/1.0;
printf("%f,slp"); }
else((x2==x1)&&(y2!=y1));
printf("inf");
    return 0; }