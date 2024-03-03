#include <stdio.h>
int main(){
    int x1,x2,y1,y2,slope,a[7];
    for(i=0;i<7;i++)
     scanf("%d",&a[i]);
    x1=(float)a[0];
    printf("%.2f",a[0]);
    if(x1!=x2) {
        delx=x2-x1;
        dely=y2-y1;
     printf("%.2f %.2f",delx,dely); }
    else if(x1==x2)
    printf("inf");
    return 0; }