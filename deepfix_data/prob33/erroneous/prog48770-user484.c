#include <stdio.h>
int main() {
    int health,plats,hgt=0,a=0,total=0,n;
        scanf("%d",&health);
        scanf("%d",&plats);
    for(n=0;n<plats;n++) {
           scanf("%d",&hgt);
           if(hgt>a)
            continue;
            else health=health -(a-hgt);
            a=ght; }
    if(a>0)
        printf("Yes");
    else printf("No");
    return 0; }