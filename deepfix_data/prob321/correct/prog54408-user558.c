#include <stdio.h>
int main(){
    int x1,y1,x2,y2,d;
    float m;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    x1=(float)x1;
    x2=(float)x2;
    y1=(float)y1;
    y2=(float)y2;
    m=(y2-y1)/(x2-x1);
    if(x2==x1) {
        printf("inf");
        return 0; }
    else
    printf("%.2f",m);
    return 0; }