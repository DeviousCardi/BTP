#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float z;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    z=(y2-y1)/(x2-x1);
    if((x2-x1)==0.0) {
        printf("inf"); }
    else {
        printf("%.2f",z); }
    return 0; }