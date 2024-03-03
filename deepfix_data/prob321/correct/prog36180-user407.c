#include <stdio.h>
int main(){
int x1,y1,x2,y2 ;
float slp;
-100<=x1,x2,y1,y2<=100;
scanf("%d  %d /n %d  %d",&x1,&x2,&y1,&y2);
if(x1!=x2)
{slp=(y2-y1)/(x2-x1);
printf("%f",slp);}
if(x1==x2&&y1!=y2)
printf("inf");
if((x1=x2)&&(y1=y2))
printf("1.00");
    return 0; }