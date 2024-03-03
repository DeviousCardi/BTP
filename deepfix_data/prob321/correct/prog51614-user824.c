#include <stdio.h>
int main(){
    float x1,x2,y1,y2,slope,S;
    scanf("%f  %f\n",&x1,&y1);
    scanf("%f  %f",&x2,&y2);
    slope=(y2-y1)/(x2-x1);
    S=1.0/slope;
    if(S==0)
    printf("inf");
    else
    if(S!=0)
    printf(".2f%",slope);
    return 0; }