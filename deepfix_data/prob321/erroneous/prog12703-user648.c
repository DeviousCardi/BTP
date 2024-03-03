#include <stdio.h>
int main(){
    int x1,x2,y1, y2;
    float m;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    if((x1==x2)&&(y1==y2)
    if((-100<=x1&&x1<=100)&&(-100<=x2&&x2<=100)&&(-100<=y1&&y1<=100)&&(-100<=y2&&y2<=100)) {
        if((x2-x1)!=0) {
            m=(y2-y1)/(x2-x1);
            printf("%0.2f",m); }
        else {
            printf("inf"); } }
return 0; }