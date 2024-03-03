#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float s;
    scanf ("%d%d\n",&x1,&y1);
    scanf ("%d%d",&x2,&y2);
    if (x1==x2) {
        printf ("   \"inf\"  "); }
    s=(y2-y1)/(x2-x1);
    printf ("%.2f",s);
    return 0; }