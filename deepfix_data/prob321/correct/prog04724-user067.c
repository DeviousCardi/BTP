#include <stdio.h>
int main(){
    float m;
    int x1,y1,x2,y2;
    int a,b;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
     a=y2-y1;
    b=x2-x1;
    m=(a/b);
    if(x1!=x2&&y1!=y2)
    {printf("%0.2f",m);}
    return 0;
    if(x1!=x2,y1=y2)
    printf("inf");
    return 0; }