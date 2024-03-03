#include <stdio.h>
int main(){
    int x1,x2,y1,y2 ;
    float m;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    m=(x1-y1)/(x2-y2) ;
    if(x1!=x2)
    printf("%.2f",m);
   else if(x2==y2)
    {printf("inf"); }
    return 0; }