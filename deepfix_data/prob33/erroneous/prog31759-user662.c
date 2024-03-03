#include <stdio.h>
int main() {
    int h,p=0,i;
    int max;
    scanf("%d",&h);
    while(2<=p<=100) {
    scanf("%d",&p); }
    for(i=0;0<i<1000;i++) {
        scanf("%d",&i);
        max=(i>max)?i:max;
        swap(i,max);
        e=max-i;
        if(e<=h && e!=0) {
            printf("yes");
        }else {
            printf("no"); } }
    return 0; }