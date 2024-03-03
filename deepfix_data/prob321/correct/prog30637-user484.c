#include <stdio.h>
int main(){
int x1=0,x2=1,y1=0,y2=1;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
float slope=0.00;
    slope= (y2-y1)/(x2-x1);
        if ((x2-x1)!=0)
             printf("%.2f",slope);
        else
             printf("inf");
return 0; }