#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float slope;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    slope=((y2-y1)/((x2-x1)*1.0));
    if(1/slope==0)
    printf("inf");
    else if (slope==0)
    printf("0.00");
    else
    printf("%.2f",slope);
    return 0; }