#include <stdio.h>
int main(){
    float x1,x2;
    float y1,y2;
    float m=0;
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    m= ((y2-y1)/(x2-x1));
    if((x1>=100)||(x2>=100) && (y1>=100)||(y2>=100)) {
        else if((x1=<100)||(x2=<100 )&& (y1=<100)||(y2=<100)) {
            printf("%.2f",m) } }
    return 0; }