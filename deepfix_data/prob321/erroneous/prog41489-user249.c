#include <stdio.h>
int mod(int a,int b) {
    if(a-b>=0)
        return a-b;
    else
        return b-a; }
int main(){
    int x1,x2,y1,y2;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    float s;
    if(x1==x2&&y1!=y2) {
        printf("inf"); }
    else {
        s=mod(y2;y1)/mod(x2,x1);
        printf("%.2f",s);
        return 0; } }