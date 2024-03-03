#include <stdio.h>
int main() {
    int x1,y1,x2,y2;
    float  s,d;
    scanf("%d %d %d %d",&x1,&y1, &x2, &y2);
    d=(y2-y1)*1.00;
    s=d/(x2-x1);
    if(x2-x1==0)
    printf("inf");
    else
    printf("%.2f", s);
    return 0; }