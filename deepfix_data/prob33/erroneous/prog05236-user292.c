#include <stdio.h>
int main() {
    int health,p,i,height1,height2;
    scanf("%d",&health);
    scanf("%d",&p);
    scanf("%d",&height1);
    for(i=0;i<p;i++) {
        scanf("%d",&height2);
        if(height2<height1) {
            h=h-(height1-height2); }
        height1=height2; }
    if(h<=0) {
        printf("No"); }
    else {
        printf("Yes"); }
    return 0; }