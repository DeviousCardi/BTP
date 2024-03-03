#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    float n;
    scanf("%d%d" ,&x1,&y1);
    scanf("%d%d" ,&x2,&y2);
    for(x1=-100;x1<=100;x1++)
    for(y1=-100;y1<=100;y1++)
    for(x2=-100;x2<=100;x2++)
    for(y2=-100;y2<=100;y2++)
    n=(y2-y1)/(x2-x1);
 {   if(x1>x2||x1<x2)
    printf("%0.2f" ,n); }
   {if (x1==x2)
       printf("inf"); }
    return 0; }