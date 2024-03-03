#include <stdio.h>
int main(){
    int x1, x2, y1, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    float slope, m;
    m=x2-x1;
    if(m==0)
       printf("inf");
    else {
        slope=(y2-y1)/m;
        printf("%.2f", slope); }
    return 0; }