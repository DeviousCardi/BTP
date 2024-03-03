#include <stdio.h>
int main() {
    int x,y,x1,x2,y1,y2;
    float n;
    scanf("%d%d" ,&x1,&y1);
    scanf("%d%d" ,&x2,&y2);
    y=y2-y1;
    x=x2-x1;
    n=y/x;
    for(x=-100;x<=100;x++)
    for(y=-100;y<=100;y++)
 {   if(x1>x2||x1<x2)
    printf("%0.2f" ,n); }
   {if (x1==x2)
       printf("inf"); }
    return 0; }