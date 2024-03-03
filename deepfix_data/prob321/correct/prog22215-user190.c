#include <stdio.h>
int main(){
    int x1,y1,x2,y2,slope;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    if(x2 == x1){
        printf("inf"); }
    else{
        slope = (y2 - y1)/(x2 - x1);
        printf("%d",slope); }
    return 0; }