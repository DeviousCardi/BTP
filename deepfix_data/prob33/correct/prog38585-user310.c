#include <stdio.h>
int main() {
    int h, p;
    int initialHeight, finalHeight;
    int i;
    scanf("%d", &h);
    scanf("%d", &p);
    scanf("%d", &initialHeight);
    for(i=0;i<p;i++) {
        scanf("%d", &finalHeight);
        if(finalHeight<initialHeight)
            h = h-(initialHeight - finalHeight);
        initialHeight = finalHeight; }
    if(h>0)
        printf("Yes");
    else
        printf("No");
    return 0; }