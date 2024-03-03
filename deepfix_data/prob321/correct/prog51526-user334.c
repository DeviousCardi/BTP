#include <stdio.h>
int main()
{   int x1,y1,x2,y2;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2); {
    if((x2-x1==0)&&(y1!=y2)) {
        printf("inf"); }
    else {
        float s;
        s=(y2-y1)/(x2-x1);
        printf("%.2f",s); } }
    return 0; }