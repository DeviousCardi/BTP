#include <stdio.h>
int main() {
    int h;
    scanf("%d",&h);
    int p;
    scanf("%d",&p);
    int health;
    int p1,p2;
    int diff,diff1,i;
    scanf("%d",&p1);
    scanf("%d",&p2);
    for(i=1; i<(p/2); i++) {
        diff=p1-p2;
        scanf("%d",&p1);
        diff1=p2-p1;
        if(diff>=0) {
            h=h-diff; }
        if(diff1>=0) {
            h=h-diff1; }
        scanf("%d",&p2); }
    if(h>0) {
        printf("Yes"); }
    else if(h<=0) {
        printf("No"); }
    return 0; }