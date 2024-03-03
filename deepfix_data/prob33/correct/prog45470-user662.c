#include <stdio.h>
int main() {
    int h,p=0,i,E=0;
    int max;
    scanf("%d",&h);
    while(2<=p<=100) {
    scanf("%d",&p); }
    for(i=0;0<i<1000;i++) {
        scanf("%d",&i);
        if(i>max) {
            max=i; }
        printf("%d",max);
        E=max-i;
        if(E<=h && E!=0) {
            printf("yes");
        }else {
            printf("no"); } }
    return 0; }