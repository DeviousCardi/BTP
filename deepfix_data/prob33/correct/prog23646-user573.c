#include <stdio.h>
int main() {
    int h,p,i,value1,value2,health=0;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&value1);
    for(i=1;i<=p;i++) {
        scanf("%d",&value2);
        if(value2<value1)
        health=health+(value2-value1);
        value1=value2; }
    if(health<=0)
    printf("Yes");
    else
    printf("No");
    return 0; }