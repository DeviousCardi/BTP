#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    float slope=(y1-y2)/(x1-x2);
    if((x1-x2)==0){printf("inf");}
    else{printf("%.2f",slope);}
    return 0; }