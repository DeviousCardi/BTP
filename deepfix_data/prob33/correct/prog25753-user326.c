#include <stdio.h>
int main() {
    int a,b,h,n;
    int i=0;
    scanf("%d",&h);
    scanf("%d",&n);
    scanf("%d %d",&a,&b);
    if(a>b)
    h=h-(a-b);
    a=b;
    while(i<=n-2) {
        scanf("%d",&b);
        if(a<b)
        h=h-(a-b);
        i++; }
    if(h<0)
    printf("No");
    else
    printf("Yes");
    return 0; }