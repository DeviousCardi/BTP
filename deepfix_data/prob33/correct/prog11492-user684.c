#include <stdio.h>
int main() {
    int health,p,hp1,hp2;
    scanf("%d\n%d",&health,&p);
    scanf("\n%d",hp1);
    for(int i=2;i<=p;i++) {
        scanf("%d",hp2);
        if(hp2<hp1)
            health=health-(hp1-hp2);
        hp1=hp2;
        if(health<=0)
            break; }
    if(health>0)
        printf("Yes");
    else
        printf("No");
    return 0; }