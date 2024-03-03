#include <stdio.h>
int main() {
    float m;
 int x1=1,y1=1;
 int x2=1,y2=1;
 scanf("%d %d",&x1,&y1);
 scanf("%d %d",&x2,&y2);
 m=(y1-y2)/(x1-x2);
if(((x1!=x2)&&(y1==y2))||((x1=x2)&&(y1!=y2))||((x1!=x2)&&(y1!=y2))) {
    if (x1==x2) {
        printf("inf"); }
    printf("%.2f",m); }
    return 0; }