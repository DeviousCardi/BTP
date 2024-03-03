#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float slop;
    scanf ("%d%d%d%d",&x1,&x2,&y1,&y2);
    slope =(y2-y1)/(x2-x1);
    if ((-100<=x1<=100) && (-100<=y1<=100) && (-100<=x2<=100) && (-100<=y2<=100) && (x1!=x2)) {
    printf ("%f",slop); }
   else if (x1==x2) {
       printf ("inf"); }
    return 0; }