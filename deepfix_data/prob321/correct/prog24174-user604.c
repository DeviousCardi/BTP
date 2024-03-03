#include <stdio.h>
int main(){
    float x1,x2,y1,y2;
    float m;
    scanf("%f  %f ",x1,x2);
    scanf("%f  %f",y1,y2);
    printf("%d",x1);
    if((x1-x2)==0)
       printf("inf");
    else
    {  m=(y2-y1)/(x2-x1);
    printf("%.2f",m);}
    return 0; }