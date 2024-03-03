#include <stdio.h>
int main(){
    int x1,x2,y1,y2 ;
    float m;
     m=(y1-y2)/(x1-x2) ;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if (x1!=x2)
    { printf("%f",m); }
    else if (x1==x2)
    {printf("inf"); }
    return 0; }