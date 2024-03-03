#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float slope;
    scanf("%d%d\n%d%d\n",&x1,&y1,&x2,&y2);
    if((x2-x1)==0){
        printf("inf");
        return 0; }
    slope=((float)y2-(float)y1)/((float)x2-x1);
    printf("%.2f",slope);
    return 0; }