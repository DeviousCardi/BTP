#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    float m;
scanf("%d %d",&x1,&y1);
scanf("%d %d",&x2,&y2);
if(x1!=x2) {
m=(y2-y1)/(x2-x1);
printf("%.2f",m); }
else if(y1!=y2)
printf("inf");
 return 0; }