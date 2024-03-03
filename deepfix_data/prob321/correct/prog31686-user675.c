#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float a,b,slope;
    scanf("%d  %d\n", &x1,&y1);
    scanf("%d  %d\n", &x2,&y2);
    a=y1-y2;
    b=x1-x2;
    if(b==0)
        printf("inf");
    else{
        slope=a/b;
        printf("%.2f", slope); }
    return 0; }