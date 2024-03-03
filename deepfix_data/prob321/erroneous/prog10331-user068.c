#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d\n",&x2,&y2);
    float slope;
    if(x2-x1==0) {
        printf("inf"); }
    else {
    slope=(float((y2-y1))/float(x2-x1);
    printf("%.2f",slope); }
    return 0; }