#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float m;
    scanf("%d  %d\n",&x1,&y1);
    scanf("%d  %d\n",&x2,&y2);
    if((-100<=x1||y1||x2||y2<=100)&&(y2!=y1)){
    m=(y2-y1)/(x2-x1);
    if(x1!=x2)
    printf("%.2f",m);
    else
        {printf("inf");}}
    return 0; }