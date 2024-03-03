#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float m=0,Y=0,X=0;
    scanf("%d %d",&x1,&y1);
    scanf("\n");
    scanf("%d %d",&x2,&y2);
    printf("%d %d %d %d",x1,y1,x2,y2);
   Y=y2-y1;
   X=x2-x1;
   m=Y/X;
   if(Y==0)
      printf("\"inf\"");
      else
        printf("%d",m);
    return 0; }