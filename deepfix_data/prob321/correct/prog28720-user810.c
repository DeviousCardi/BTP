#include <stdio.h>
int main(){
int x1,y1,x2,y2;
float s;
scanf("%d %d",&x1,&y1);
scanf("%d %d",&x2,&y2);
if(x1!=x2)
{   if(x2>x1&&y2>y1||x2<x1&&y1<y2) {
    s=(y2-y1)/(x2-x1);
    printf("%.2f",s); }
    else if(x2<x1&&y2>y1) {
        s=(y2-y1)/(x1-x2);
        printf("%.2f",s); }
    else if(y2<y1&&x2>x1) {
        s=(y1-y2)/(x2-x1);
        printf("%.2f",s); } }
else if(x1==x2) {
    printf("inf"); }
else if(y1==y2) {
    printf("0.00"); }
    return 0; }