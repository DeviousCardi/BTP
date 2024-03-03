#include <stdio.h>
int main(){
    int y1, x1,y2,x2;
    float slope;
    scanf("%d %d\n%d %d",&x1,&y1,&x2,&y2);
    if((y2-y1)==0)
    printf("inf");
    else {
        slope= (float(x2)-float(x1))/(float(y2)-float(y1));
        printf("%.2f",slope); }
    return 0; }