#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float m;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    m=((float)(y2-y1)/(x2-x1));
    if(x2==x1) {
        printf("inf");}
        else {printf("%.2f",m);}
    return 0; }