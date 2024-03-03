#include <stdio.h>
int main() {
    int a,b,h,n;
    int i=0;
    int c=0;
    scanf("%d",&h);
    scanf("%d",&n);
    scanf("%d %d",&a,&b);
    if(a>b)
    c=(a-b);
    a=b;
    while(i<=n-2) {
        scanf("%d",&b);
        if(a>b)
        c=c-(a-b);
        i++; }
    if(h<c)
    printf("no");
    else
    printf("yes");
    return 0; }