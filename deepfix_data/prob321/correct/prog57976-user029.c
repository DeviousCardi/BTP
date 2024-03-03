#include <stdio.h>
int main(){
    int x1,x2,y1,y2;float a,b,slope;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    a=(float)(y2-y1);
    b=(float)(x2-x1);
    if(b!=0.0) {
     slope=a/b;
    printf(".2%f",slope); }
    else
    printf("inf");
    return 0; }