#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    int y=y2-y1;
    int x=x2-x1;
    float slope=y/x;
    if(x==0)
    printf("inf");
    else
    printf("%0.2f",slope);
    return 0; }