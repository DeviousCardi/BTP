#include <stdio.h>
int main(){
    int x1=0,x2=0,y1=0,y2=0;
    float m,Y,X;
    scanf("%d %d",&x1,&y1);
    scanf("\n");
    scanf("%d %d",&x2,&y2);
    Y=y2-y1;
    X=x2-x1;
    m=Y/X;
     if(Y==0)
        printf("\"inf\"");
      else
         printf("%f",m=Y/X);
    return 0; }