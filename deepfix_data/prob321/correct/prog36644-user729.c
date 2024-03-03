#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    float slope,diffx,diffy;
    diffx=(x2-x1);
    diffy=(y2-y1);
    if(diffx==0) {
        printf("inf"); }
    else {
        slope=(diffy)/(diffx);
        printf("%.2f",slope); }
    return 0; }