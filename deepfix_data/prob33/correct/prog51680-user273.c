#include <stdio.h>
int main() {
    int h;
    int k;
    int t=1000;
    int diff;
    scanf("%d\n",&h);
    int p;
    scanf("%d\n",&p);
    int i;
    int flag=0;
    for(i=0;i<=p;i++) {
        scanf("%d",&k);
        if((k-t)<0) {
         diff=t-k; }
        t=k;
        if(i>0) {
            h=h-diff; } }
    if(h>0) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }