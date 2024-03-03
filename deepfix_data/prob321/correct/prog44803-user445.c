#include <stdio.h>
int main(){
    int x1,y1;
    int x2,y2;
    int c, d;
    float m=0;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    c=y2-y1;
    d=x2-x1;
    if(((x1+x2+y1+y2)>=-400)&&((x1+x2+y1+y2)<=400)) {
        if((x1!=x2)||(y1!=y2)) {
            if(x1==x2)
            printf("inf");
            else {
              m=c/d;
              printf("%.2f",m); } } }
    return 0; }