#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    float slope ;
    scanf ("%d %d",&x1,&y1) ;
    scanf ("%d %d",&x2,&y2) ;
    float a=x1 ;
    float b=y1 ;
    float c=x2 ;
    float d=y2 ;
    if (x2-x1!=0) {
        slope = (d-b)/(c-a) ;
        printf ("%.2f",slope) ; }
    else {
        printf ("inf") ; }
    return 0; }