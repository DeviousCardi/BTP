#include <stdio.h>
int main(){
    int n,i,count=0;
    scanf("%d\n",&n);
    int h[n];
    for(i=0;i<n;i++) scanf("%d",&h[i]);
    for(i=1;i<n-1;i++) {
        if((h[i-1]<h[i])&&(h[i]>h[i+1]))
            count++; }
    printf("%d",count);
    return 0; }