#include <stdio.h>
int main() {
    int x1,y1,x2,y2;
    scanf("%d %d\n%d %d",&x1,&y1,&x2,&y2);
         if(
        ((x1>=(-100))&&(x1<=100))&&((y1>=(-100))&&(y1<=100)&&((x2>=(-100))&&(x2<=100))&&((y2>=(-100))&&(y2<=100))) ) {
             if(x2==x1)
                    printf("inf");
             float s;
                s=(y2-y1)/(x2-x1)+(y2-y1)%(x2-x1);
    printf("%.2f",s); }
    return 0; }