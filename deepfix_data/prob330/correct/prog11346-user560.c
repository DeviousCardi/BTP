#include <stdio.h>
int main() {
    int n,i;
    scanf("%d\n",&n);
    int h[n];
    for(i=0;i<n;i=i+1) {
        scanf("%d",&h[i]); }
    int count=0;
    for(i=1;i<n-1;i=i+1) {
        if((h[i]<h[i-1])&&(h[i]>h[i+1])) {
            count=count+1; }
        printf("%d",count); }
    return 0; }