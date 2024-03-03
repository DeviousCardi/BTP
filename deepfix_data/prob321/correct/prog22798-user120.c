#include <stdio.h>
int main(){
    int x1,y1;
    scanf("%d%d",&x1,&y1);
    int x2,y2;
    scanf("%d%d",&x2,&y2);
    float s,d1,d2;
    d1=x1-x2;
    d2=y1-y2;
    s=d2/d1;
    printf("%.2f",s);
    return 0; }