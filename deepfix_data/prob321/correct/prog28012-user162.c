#include <stdio.h>
int main(){
    int x1;
    int x2;
    int y1;
    int y2;
    float s;
    float inf;
    s = (y2-y1)/(x2-x1);
    scanf ("%d  %d\n",&x1,&y1);
    scanf ("%d  %d\n",&x2,&y2);
    if (((x1-x2)==0)) {
        printf ("%.2f\n",inf); }
    else {
        printf ("%.2f\n",s=(y2-y1)/(x2-x1)); }
    return 0; }