#include <stdio.h>
int main() {
    int h;
    scanf("%d",&h);
    int p;
    scanf("%d",&p);
    int health;
    int p1,p2;
    int diff,i;
    scanf("%d",&p1);
    scanf("%d",&p2);
    for(i=1; i<p; i++) {
        diff=p1-p2;
        scanf("%d",&p2);
        if(diff>=0) {
            h=h-diff; }
        else if(diff<0) {
            break; }
        scanf("%d",&p1); }
    if(h>0) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }