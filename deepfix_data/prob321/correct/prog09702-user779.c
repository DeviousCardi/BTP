#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float d;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    if(x1==x2){
        printf("inf"); }
    else{
        d=(y2-y1)/(x2-x1);
        printf(".2%f",d); }
    return 0; }