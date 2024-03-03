#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float slope;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    slope= (y2-y1)/x2-x1;
    if(x1==x2)
         {  printf("inf"); }
    else
        {  printf("%.2f",slope); }
    return 0; }