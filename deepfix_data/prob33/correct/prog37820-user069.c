#include <stdio.h>
int main() {
    int h,p,i,prev,curr;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    scanf("%d ",&prev);
    for(i=2; i<=p; i++) {
        scanf("%d",&curr);
        if(curr < prev) {
            h = h - (prev - curr); }
        prev = curr; }
    if(h<=0) {
        printf("No"); }
    else {
        printf("Yes"); }
    return 0; }