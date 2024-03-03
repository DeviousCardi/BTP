#include <stdio.h>
int main() {
    int x1,y1,x2,y2,x,y;
    int slope;
    scanf("%d%d\n",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    y=y2-y1;
    x=x2-x1;
    if(x==0)
    printf("inf");
    else
   { slope=y/x;
    printf("%d.00",slope);}
    return 0; }