#include <stdio.h>
int main(){
    int x1,y1;
    int x2,y2;
    int k;
    float slope;
    scanf("%d,%d",&x1,&y1);
    scanf("%d,%d",&x2,&y2);
    if(x1==x2) {
        printf("inf"); }
    else {
        k=y2-y1;
        slope=k/(x2-x1);
        printf("\n%.2f\n",slope); }
     return 0; }