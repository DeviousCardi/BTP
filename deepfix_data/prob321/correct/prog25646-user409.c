#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    scanf("%d %d\n %d %d",&x1,&x2,&y1,&y2);
    float k1=(y2-y1)*0.01;
    float k2=(x2-x1)*0.01;
    float m=k1/k2;
    if(y1=y2) {
        printf("inf"); }
    else if((x1>=-100&&x1<=100)&&(x2>=-100&&x2<=100)&&(y1>=-100&&y1<=100)&&(y2>=-100&&y2<=100)) {
        printf("%.2f",m); }
    return 0; }