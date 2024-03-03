#include <stdio.h>
int main() {
    int n,count=0,h[100];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&h[i]); }
    for(i=1;i<n-1;i++) {
        if(h[i]>h[i-1]&&h[i]>h[i+1])
        count++; }
    printf("%d",count);
    return 0; }