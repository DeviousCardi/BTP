#include <stdio.h>
int main(){
    int x1=0,x2=0;
    int y1=0,y2=0;
    float m;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d\n",&x2,&y2);
    if(x1==x2 && y1!=y2){
        printf("inf");
    }else{
        if((x1!=x2 && y1!=y2)||(x1!=x2 && y1==y2)) {
              m=(y2-y1)/(x2-x1);
              printf("%.2f",m); } }
    return 0; }