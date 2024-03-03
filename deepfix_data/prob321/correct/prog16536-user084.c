#include <stdio.h>
int main(){int x1,y1,x2,y2;
int slope;
    scanf("%d",&x1);
     scanf("%d",&x2);
      scanf("%d",&y1);
       scanf("%d",&y2);
       if(x2==x1)
       {printf("inf"); }
    slope=(y2-y1)/(x2-x1);
   printf("%d",x1);
    printf("%d",slope);
    return 0; }