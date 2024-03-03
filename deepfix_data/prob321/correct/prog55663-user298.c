#include <stdio.h>
int main(){
    int x1,y1;
    float count=0.0;
    scanf("%d %d\n",&x1,&y1);
    int x2,y2;
    scanf("%d %d\n",&x2,&y2);
    if ((x1>=-100 && x1<=100)&&(x2>=-100 &&x2<=100)&&(y1>=-100 && y1<=100)&&(y2>=-100 && y2<=100)) {
        if (x1!=x2) {
            count=(y2-y1)/(x2-x1);
            printf ("%.2f",count); }
        else if (x1==x2) {
            printf("\"inf\""); } }
    return 0; }