#include <stdio.h>
int main() {
    int h1,h2,h,p,ph1,ph2;
    scanf("%d %d",h,p);
    scanf("%d",ph1);
    for(int i=0; i<p; i++) {
        scanf("%d",ph2);
        if(ph1>ph2) {
            h=h-(ph1-ph2); }
        ph1=ph2; }
    if(h>0)
        printf("Yes");
    else
        printf("No");
    return 0; }