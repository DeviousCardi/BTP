#include <stdio.h>
int main() {
    int h;
    int t=1000;
    int hf;
    int diff;
    scanf("%d\n",&h);
    int p;
    scanf("%d\n",&p);
    int i;
    for(i=0;i<p;i++) {
        scanf("%d",&hf);
        if((hf-t)<0) {
            diff=t-hf;
            if(i>0) {
                h=h-diff; } }
        t=hf; }
    if(h>0) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }