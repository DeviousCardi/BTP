#include <stdio.h>
int main() {
    int x1=50,x2=50,y1=50,y2=50;
    float slope=0.0;
        scanf("%d %d\n",&x1,&y1);
        scanf("%d %d\n",&x2,&y2);
    if(x1 == x2)
    printf("inf");
    else {
      slope= (y2-y1)/(x2-x1);
      printf("%.2f",slope); }
    return 0; }