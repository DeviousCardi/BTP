#include <stdio.h>
int main() {
    int k,h,p,d,sum=0,count=0,e;
    scanf("%d\n",&h);
    scanf("%d",&p);
    scanf("\n%d",&d);
    while(count!=p-1) {
        scanf(" %d",&e);
        count=count+1;
        if(d>e) {
            sum=sum+(d-e);
            k=d;
            d=e; }
        else
        continue; }
    if(sum>h)
    printf("No");
    else
    printf("Yes");
    return 0; }