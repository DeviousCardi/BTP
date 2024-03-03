#include <stdio.h>
int main() {
    int x1,y1,x2,y2;
    float m;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    m=(y2-y1)*1.0/(x2-x1);
    if(x2-x1==0) {
        printf("inf"); }
    else {
        printf("%0.2f",m); }
    return 0; }