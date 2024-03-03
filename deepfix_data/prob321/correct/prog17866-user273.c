#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d%d\n%d%d",&x1,&y1,&x2,&y2);
    float slope;
    slope=(((y2)-(y1))/((x2)-(x1)));
    if((((x1)!=(x2)))&&(((y1)!=(y2)))||(((x1)!=(x2))&&((y1)==(y2)))) {
        printf("%.2f",slope); }
    else {
        if((x1)==(x2)) {
            printf("inf"); } }
    return 0; }