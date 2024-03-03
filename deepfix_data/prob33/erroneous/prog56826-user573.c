#include <stdio.h>
int main() {
    int h,p,i,value1,value2,;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&value1);
    for(i=2;i<=p;i++) {
        scanf("%d",&value2);
        if(value2<value1);
        h=h+(value2-value1);
        value1=value2; }
    if(h<=0)
    printf("Yes");
    else
    printf("No");
    return 0; }