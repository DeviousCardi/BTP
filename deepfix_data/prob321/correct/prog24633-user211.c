#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float s;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    while(x1>=100&&x1<=-1&&x2>=100&&x2<=-1&&y1>=100&&y1<=-1&&y2>=100&&y2<=-1)
    if((x2-x1)==0) {
        printf("inf"); }
    else {
        s=((y2-y1)/(x2-x1));
        printf("%.2f",s); }
    return 0; }