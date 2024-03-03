#include <stdio.h>
int main() {
    int h;
    int nopf;
    int i;
    int reducehealth=0;
    scanf("%d\n%d",&h,&nopf);
    for(i=0;i<nopf;i++) {
        int p1,p2;
        scanf("%d %d",&p1,&p2);
        if(p1>p2)
        reducehealth=reducehealth+(p1-p2);
        else
            continue; }
    if(h>reducehealth)
        printf("Yes");
    else
        printf("No");
    return 0; }