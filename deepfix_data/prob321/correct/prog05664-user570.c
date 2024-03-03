#include <stdio.h>
int main() {
    int x1=-100;
    int y1=-100;
    int x2=-100;
    int y2=-100;
    float m;
    while((x1<=100)&&(y1<=100)&&(x2<=100)&&(y2<=100)) {
        scanf("%d%d%d%d",&y2,&y1,&x2,&x1);
        m=(y2-y1)/(x2-x1);
        break; }
    if((x2>x1)&&(y2>y1))
    printf("%0.2f",m);
    else if(x2==x1)
    printf("inf");
    return 0; }