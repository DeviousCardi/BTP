#include <stdio.h>
int h;
int healthloss(int c,int d) {
    if(c>d)
    h=h+d-c;
    return h; }
int main() {
    int p,b,c,i,a;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&a);
    for(i=0;i<p;i++) {
        scanf("%d",&b);
        h=healthloss( a,b);
        if(h<=0) {
            printf("No");
            break; }
        a=b; }
    if(i==p-1)
    printf("Yes");
    return 0; }