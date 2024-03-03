#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d%d\n",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    float s=(y2-y1)/(x2-x1);
        if((x2==x1)&&(y2!=y1)) {
            printf("inf"); }
        else if(x2!=x2) {
            printf("%.2f",s); }
   / }
    return 0; }