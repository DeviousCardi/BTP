#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    float m;
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    m=((y2-y1)/(x2-x1));
    if((x2-x1)!=0) {
         printf("%0.2f",m); }
    else
        printf("inf");
     return 0; }