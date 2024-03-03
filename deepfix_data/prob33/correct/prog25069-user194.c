#include <stdio.h>
int main() {
    int h,a,diff=0,temp,p,i;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&a);
    for(i=1;i<p;i++) {
        temp=a;
        scanf("%d",&a);
        if(a<temp) {
           diff=temp-a;
           h=h-diff; } }
    if(h<=0) {
        printf("No"); }
    else
        printf("Yes");
    return 0; }