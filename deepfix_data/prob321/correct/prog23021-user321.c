#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float slope;
    scanf ("%d%d%d%d",&x1,&x2,&y1,&y2);
    slope=(y2-y1)/(x2-x1);
    if ((-100<=x1<=100) && (-100<=y1<=100) && (-100<=x2<=100) && (-100<=y2<=100) && (x1!=x2)) {
    printf ("%0.2f",slope); }
    if ((x1==x2) || (x1==0 && x2==0)) {
       printf ("inf"); }
    return 0; }