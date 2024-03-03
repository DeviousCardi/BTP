#include <stdio.h>
int main() {
    int h,p,i,a1,a2,temp,flag=0;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    scanf("%d ",&a1);
    for(i=1;i<p;i++) {
        temp=-1;
        if(h>0) {
            scanf("%d ",&a2);
            if(a2<a1) {
                h-=a1-a2;
                temp=a1;
                a1=a2;
                a2=temp; }
            else {
                temp=a1;
                a1=a2;
                a2=temp; } } }
    if(h<=0)
        printf("No");
    else
        printf("Yes");
    return 0; }