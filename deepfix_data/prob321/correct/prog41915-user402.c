#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float slope,p,q;
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    p=x1,q=x2;
    if (x1==x2){
        printf("inf"); }
    else{
        slope=(y2-y1)/(q-p);
        printf("%f",slope); }
    return 0; }