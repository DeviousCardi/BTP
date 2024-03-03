#include <stdio.h>
int main(){
    int n,x1,x2,y1,y2;
    float x,y,m;
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    x=(x2-x1);
    y=(y2-y1);
    if (x!=0) {
    m=y/x;
    printf("%.2f",m); }
    if (x==0) {
        printf("%c","inf"); }
    return 0; }