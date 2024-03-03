#include <stdio.h>
int main(){
    int x1,x2,y1,y2;float slope=0.0,d=0.0,n=0.0;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    if(x1==x2)
    printf("inf");
    else
    {n=y2-y1;d=x2-x1;
        slope=n/d;
        printf("%.2f",slope); }
    return 0; }