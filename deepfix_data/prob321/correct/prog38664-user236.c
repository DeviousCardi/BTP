#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    float slope=(y2-y1)/(x2-x1);
    if (x1==x2) {
                 printf("inf"); }
    else {
          printf("%.2f",slope); }
    return 0; }