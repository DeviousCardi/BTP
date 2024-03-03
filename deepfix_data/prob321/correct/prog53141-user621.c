#include <stdio.h>
int main(){
    float x1,y1,x2,y2;
    float slope=0;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    if(x2==x1)
    printf("inf");
    else if(x2>=x1&y2>y1) {
        slope=(y2-y1)/(x2-x1);
        printf("%.2f",slope); }
    else if(x2>=x1&y2<y1) {
        slope=(y1-y2)/(x2-x1);
        printf("%.2f",slope); }
    else if(x2<=x1&y2>y1) {
        slope=(y1-y2)/(x1-x2);
        printf("%.2f",slope); }
    else if(x2<=x1&y2<y1) {
        slope=(y1-y2)/(x2-x1);
        printf("%.2f",slope); }
    return 0; }