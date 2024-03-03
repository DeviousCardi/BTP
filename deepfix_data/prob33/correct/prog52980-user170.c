#include <stdio.h>
int main()
{int h,i,p;
scanf("%d",&h);
scanf("%d",&p);
int p1;
for(i=2;i<=p;i++) {
    scanf("%d ",&p1);
    h=h-p1; }
if(h<=0) {
    printf("No"); }
else
printf("Yes");
    return 0; }