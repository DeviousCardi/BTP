#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d%d\n%d%d",&x1,&y1,&x2,&y2);
    float slope;
    slope=(((y2)-(y1))/((x2)-(x1)));
    if((x1)!=(x2)) {
        printf("%3.2f",slope); }
    else {
        printf("inf"); }
    return 0; }