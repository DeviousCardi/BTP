#include <stdio.h>
int main() {
    int n,p=0;
    scanf("%d",&n);
    int h[n];
    for(int i=0;i<n;i++) scanf("%d",&h[i]);
    for(int j=1;j<n-1;j++) {
     if(h[j]>h[j-1]&&h[j]>h[j+1])   p++; }
    printf("%d",p);
    return 0; }