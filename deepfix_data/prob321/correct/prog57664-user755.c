#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d %d\n%d %d",&x1,&y1,&x2,&y2);
    float m;
    if(x2==x1)
        printf("inf");
    else {
       m=((float)y2-y1)/((float)x2-x1);
       printf("%.2f",m); }
    return 0; }