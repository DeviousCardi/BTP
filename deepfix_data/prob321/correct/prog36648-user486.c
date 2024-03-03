#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float slope;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(x1!=x2)
    {slope=(float)(y1-y2)/(x1-x2);
    printf("%.2f",slope); }
    else
    printf("inf");
    return 0; }