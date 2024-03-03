#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float m;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d\n",&x2,&y2);
    if((x2-x1)==0) {
        printf("inf"); }
    else{
        m=(y2-y1)/(x2-x1);
        printf("%0.2f",m);printing m }
    return 0; }