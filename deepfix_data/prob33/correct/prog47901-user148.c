#include <stdio.h>
int main() {
    int health,plat,prev,next,i,loss=0;
    scanf("%d%d",&health,&plat);
    scanf("%d",&prev);
    for(i=0;i<plat-1;i++) {
        scanf("%d",&next);
        if(next<prev)
            loss=loss+(prev-next);
        prev=next; }
    if (loss>=health)
        printf ("No");
    else
        printf ("Yes");
    return 0; }