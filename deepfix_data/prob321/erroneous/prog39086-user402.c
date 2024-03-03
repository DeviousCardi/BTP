#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float slope,p,q;
    scanf("%d",&x1);
    p= float (x1);
    q= float  (x2);
    if (x1==x2){
        printf("inf"); }
    else{
        slope=(y2-y1)/(q-p);
        printf(".2%f",slope); }
    return 0; }