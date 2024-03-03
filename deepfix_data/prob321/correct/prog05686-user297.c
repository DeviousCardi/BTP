#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float slope;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    slope= (y2-y1)/x2-x1;
     if ((-100 <= x1,x2,y1,y2)&&(x1,x2,y1,y2 <= 100))
             {  printf("%.2f",slope); }
    else if(slope == (y2-y1)/(x1-x1))
           printf("inf");
    return 0; }