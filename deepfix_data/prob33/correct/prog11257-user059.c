#include <stdio.h>
int main() {
    int h,p,sum=0,d,i,k=0;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    scanf("%d ",&d);
    k=d;
    for(i=1;i<p;i++) {
        if(d<k)
        sum=sum+(k-d);
        scanf("%d ",&d); }
    printf("%d",sum);
    if((h-sum)>0)
    printf("Yes");
    else
    printf("No");
    return 0; }