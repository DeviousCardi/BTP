#include <stdio.h>
int main(){
    int x1,y1;
    int x2,y2;
    float m;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x1,&y1);
    if((x1!=x2)||(y1!=y2)) {
              if(x1-x2==0)
                {  printf("inf"); }
                      else  {if(y1-y2==0);
                          printf("%f",0.00); }
             else
             { m=(x1-x2)/(y1-y2);
                 printf("%.2f",m); } }
    return 0; }