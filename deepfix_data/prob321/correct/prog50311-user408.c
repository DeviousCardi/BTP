#include <stdio.h>
int main() {
    long x1,x2,y1,y2;
    double m;
    scanf("%d  %d",&x1,&y1);
    scanf("%d  %d",&x2,&y2);
    if((x2-x1)==0)
       printf("inf\n");
    else {
           m = (y2-y1)/(x2-x1);
           printf("%.2f",m); }
    return 0; }