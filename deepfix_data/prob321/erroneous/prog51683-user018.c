#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    float slope;
    if(x1==x2){
        printf("inf"); }
    else if(y1==y2){
        printf("0"); }
    else if{
            slope=(((y2-y1)/1.0)/(x2-x1));
            printf("%.2f",slope); }
    return 0; }