#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d\n",&x2,&y2);
    float slope=0.0;
    if(x1 == x2)
    printf("inf");
    else {
      slope= (y2-y1)/(x2-x1);
      printf("%.2f",slope); }
    return 0; }