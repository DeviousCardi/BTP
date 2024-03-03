#include <stdio.h>
int main(){
    int x1,x2,y1,y2,slope;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    if(x2-x1==0)
        printf("inf");
    else
        slope=(y2-y1)*(1.0/(x2-x1));
        printf("%.2f",slope);
    return 0; }