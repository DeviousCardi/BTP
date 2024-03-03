#include <stdio.h>
int main() {
    int health,plats,hgt=0,a=0,n;
        scanf("%d",&health);
        scanf("%d",&plats);
        scanf("%d",&a);
    for(n=1;n<plats;n++) {
           scanf("%d",&hgt);
           if(hgt>a)
            continue;
           else
            (health=(health -(a-hgt)));
            a=hgt; }
    if(a>0)
        printf("Yes");
    else printf("No");
    return 0; }