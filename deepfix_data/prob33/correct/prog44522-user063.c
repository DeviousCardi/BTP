#include <stdio.h>
int main() {
    int h;
    int p;
    int curr, next;
    scanf("%d %d", &curr, &next);
    while(p-1) {
        if(next<curr)
            h=h-(curr-next);
        curr=next;
        scanf("%d", &next);
        p--; }
    if(h>0)
        printf("Yes");
    else
        printf("No");
    return 0; }