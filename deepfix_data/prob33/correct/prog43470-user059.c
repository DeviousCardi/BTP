#include <stdio.h>
int main() {
    int h,p,sum=0,d,i,k=0;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    scanf("%d ",&k);
    for(i=1;i<p;i++) {
        scanf("%d ",&d);
        if(d<k)
        sum=sum+(k-d);
        k=d; }
    if((h-sum)>0)
    printf("Yes");
    else
    printf("No");
    return 0; }