#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d  %d %d  %d",&x1,&y1,&x2,&y2);
    if(x1<=-100||x1>=100) {
        if(y1<=-100||y1>=100) {
            if(x1!=x2) {
                float s=(y1-y2)/(x1-x2);
                printf("%.2f",s); } }
        else
        printf("inf"); }
    return 0; }