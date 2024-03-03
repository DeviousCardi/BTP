#include <stdio.h>
int main() {
    float x1,x2,y1,y2,i,j,slope;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    i=y2-y1;
    j=x2-x1;
    if(j==0)
    printf("inf");
    else {
        slope=i/j;
        printf("%.2f",slope); }
    return 0; }