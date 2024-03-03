#include <stdio.h>
int main() {
    int i, h, p;
    scanf("%d\n%d\n", &h,&p);
    int a=0, b, d=0;
    for(i=0;i<p;i++) {
        scanf("%d",&b);
        if((b-a)<0)
        d=d+b-a;
        a=b; }
    if(d<-100)
        printf("No");
    if(d>=-100)
        printf("Yes");
    return 0; }