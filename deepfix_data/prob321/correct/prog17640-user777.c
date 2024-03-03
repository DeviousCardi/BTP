#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float s;
    scanf("%d%d%d%d\n",&x1,&y1,&x2,&y2);
    if(x2!=x1){
    s=((y2-y1)/(x2-x1));}
    printf("%.2f",s);
    if(x2==x1)
    printf("\"inf\n",s);
    return 0; }