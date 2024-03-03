#include <stdio.h>
int main() {
    int h,p=0,i,n,E=0;
    int max;
    scanf("%d",&h);
    scanf("%d",&p);
    for(i=0;i<p;i++) {
        scanf("%d ",&n);
        if(n>max) {
            max=n; }
        printf("%d ",max);
        E=max-n;
        printf("%d ",&E);
        if(E<=h && E!=0) {
            printf("Yes "); } }
        printf("No ");
    return 0; }