#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float slope;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    if( x1>=-100 && x1<=100 && y1>=-100 && y1<=100 && x2>=-100 && x2<=100 && y2>=-100 && y2<=100 && ((x1 != x2 || y1 != y2)||(x1!=x2 && y1!=y2))) {
    if(x1-x2 != 0 ) {
    slope=(y1-y2)/(x1-x2)*1.0;
    printf("%.2f",slope); }
    else printf("inf"); }
    return 0; }