#include <stdio.h>
int main(){
    int x1,x2,y1,y2,slope,delx,dely;
    scanf("%f ",&x1);
    scanf("%f ",&y1);
    scanf("%f ",&x2);
    scanf("%f",&y2);
    if(x1!=x2) {
        delx=x2-x1;
        dely=y2-y1;
     printf("%.2f %.2f",delx,dely); }
    else if(x1==x2)
    printf("inf");
    return 0; }