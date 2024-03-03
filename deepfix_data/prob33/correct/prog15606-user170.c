#include <stdio.h>
int main()
{int h,i,p,p1;
scanf("%d",&h);
scanf("%d",&p);
scanf("%d ",&p1);
int d=0,p2;
for(i=2;i<=p;i++) {
    scanf("%d ",&p2);
    if(p2<p1) {
        d=d+p1-p2; }
    p1=p2; }
if(d>=h) {
    printf("No"); }
else
printf("Yes");
    return 0; }