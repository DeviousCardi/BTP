#include <stdio.h>
int main() {
    int h,p;
    scanf("%d",&h);
    scanf("%d",&p);
    int pf,ps;
    scanf("%d",&pf);
    for(int i=1;i<p;i++) {
        scanf("%d",&ps);
        if(ps<pf) {
            h=h-(pf-ps); }
        if(h<=0) {
            break; }
        pf=ps; }
    if(h>0) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }