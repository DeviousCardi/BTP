#include <stdio.h>
int main(){
    int x1, x2, y1, y2, n, i;
    float m;
    n=4;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(x1==x2) {
        printf("inf");
        n=-1; }
    for(i=0;i<n;i++) {
        m=(y2-y1)/(x2-x1);
        printf("%.2f",m); }
    return 0; }