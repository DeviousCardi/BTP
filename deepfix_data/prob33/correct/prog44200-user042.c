#include <stdio.h>
int main() {
    int h,i,p,a,b=0,flag=0;
    scanf("%d",&h);
    scanf("%d",&p);
    for(i=1;i<p;i++) {
        scanf("%d",&a);
        if(b<=a)
            b=a;
        else {
            h-=(b-a);
            b=a; }
        if(h==0) {
            flag=1;
            break; } }
    if(flag==1)
        printf("No");
    else
        printf("Yes");
    return 0; }