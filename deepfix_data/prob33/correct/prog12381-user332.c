#include <stdio.h>
int main() {
    int h,p,j,i,d,j1;
    scanf("%d %d",&h,&p);
    scanf("%d",&j1);
    for(i=2;i<=p;i++) {
        scanf("%d",&j);
        if(j<j1) {
            d=(j1-j);
            h=h-d; } }
    if (h<=0)
    printf("No");
    else
    printf("Yes");
    return 0; }