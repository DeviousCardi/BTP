#include <stdio.h>
int main()
{   int h, p, i, diff, p1, p2, f = 0;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&p1);
    for(i = 1; i <= p; i++) {
        scanf("%d",&p2);
        diff = p2 - p1;
        if(diff < 0) {
            h = h + diff; }
        if(h <= 0) {
            printf("No");
            f = 1;
            break; }
        p1 = p2; }
    if(f == 0) {
        printf("Yes"); }
    return 0; }