#include <stdio.h>
int main() {
    int h,p,counter=0;
    scanf("%d\n%d",&p,&h);
    int aft,now;
    if(h>0&&2<=p&&p>=100) {
        scanf("%d",&now);
        while(counter<=p) {
            scanf("%d",&aft);
            if(aft<now) {
                h=h-(now-aft); }
            counter++;
            aft=now; } }
    if(h>0) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }