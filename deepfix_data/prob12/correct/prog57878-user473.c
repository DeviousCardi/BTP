#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int n;
    n=2*a-1;
    int s[n];
    int i;
    scanf("%d",&i);
    while(i<=a) {
        scanf("%d",&i);
        s[n]=i; }
    int x,y;
    scanf("%d %d",&x,&y);
    if(s[x]==s[y])
    printf("%d",x-y);
    return 0; }