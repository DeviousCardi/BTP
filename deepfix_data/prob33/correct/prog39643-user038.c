#include <stdio.h>
int main() {
    int h,p;
    scanf("%d\n%d",&p,&h);
    int aft,now,diff;
    if(h>0&&2<=p&&p>=100) {
        while(h>0) {
            scanf("%d %d",&now,&aft);
            if(aft<now) {
                h=h+(now-aft); } } }
    return 0; }