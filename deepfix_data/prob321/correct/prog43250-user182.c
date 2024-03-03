#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    int m1,m2;
    float m;
    scanf("%d  %d",&x1,&y1);
    scanf("%d  %d",&x2,&y2);
    if((-100<=x1)&&(x1<=100)&&(-100<=y1)&&(y1<=100)&&(-100<=x2)&&(x2<=100)&&(-100<=y2)&&(y2<=100)&&      ((x1!=x2)||(y1!=y2))) {
        m1=y2-y1;
        m2=x2-x1;
        m=m1/m2;
        if(m2==0)
        printf("inf");
        else
        printf("%.2f",m); }
    return 0; }