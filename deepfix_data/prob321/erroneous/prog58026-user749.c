#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float slope;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d\n",&x2,&y2);
    if(x1==x2) printf("inf");
    else{
        slope=((float(y2))-(float(y1)))/((float(x2))-(float(x1)));
        printf("%.2f",slope); }
    return 0; }