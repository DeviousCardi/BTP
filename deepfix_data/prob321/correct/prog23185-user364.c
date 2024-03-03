#include <stdio.h>
int main() {
 int x1,x2,y1,y2,a,b,temp;
 float slope;
 scanf("%d %d",&x1,&y1);
 scanf("%d %d",&x2,&y2);
 if (x1==x2) {
     printf("inf");
     return 0; }
else if(y1==y2)
    {printf("%f",0.00);
    return 0; }
else {
    if(y1>y2) {
        temp=y1;
        y1=y2;
        y2=temp;}
    if(x1>x2) {
        temp=x1;
        x1=x2;
        x2=temp; }
    a=y2-y1;
      b=x2-x1;
    if(a<0) {
        a=-a; }
    if(b<0) {
        b=-b; }
    slope=(a/b)+a%b;
 printf("%.2f",slope); }
    return 0; }