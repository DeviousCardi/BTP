#include <stdio.h>
int main(){
    float x1,y1,x2,y2;
    scanf("%f %f\n%f %f",&x1,&y1,&x2,&y2);
    float m,k;
    k=x2-x1;
    m= (y2-y1)/k;
    if(k==0){
        printf("inf"); }
    else{
        printf("%.2f",m); }
    return 0; }