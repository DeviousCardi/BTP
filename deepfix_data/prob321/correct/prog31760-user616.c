#include <stdio.h>
#include <math.h>
int main(){
    int x1,x2,y1,y2;
    scanf("%d %d%d %d",&x1,&y1,&x2,&y2);
    if((x2-x1)==0) {
        printf("inf"); }
    else {
        float m=(y2-y1)/(x2-x1);
        int m2=(int)m;
        if(m2<0) {
            m2=0-m2; }
        int n=0;
        while(m2>0) {
            n++;
            m2=m2/10; }
        printf("%.2f",m); }
    return 0; }