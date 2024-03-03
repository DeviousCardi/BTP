#include <stdio.h>
int main(){
    int x1=0;
    int x2=0;
    int y1=0;
    int y2=0;
    float s;
    int inf=inf;
    s = (1.0* (y2-y1)/(x2-x1));
    scanf ("%d %d\n",&x1,&y1);
    scanf ("%d %d\n",&x2,&y2);
    if (((x1-x2)==0)) {
        printf ("%d\n",inf); }
    else {
        printf ("%.2f\n",s=(1.0*(y2-y1)/(x2-x1))); }
    return 0; }