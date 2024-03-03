#include <stdio.h>
int main() {
    int h,p,max=0,f=0,i,a;
    scanf("%d",&h);
    scanf("%d",&p);
    for(i=0;i<p;i++) {
        scanf("%d ",&a);
        if(a>=max) {
            max=a; }
        else
        f=f+max-a;
        max=a; }
    if(h-f<=0)
    printf("no");
    else
    printf("yes");
    return 0; }