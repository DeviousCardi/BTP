#include <stdio.h>
int main() {
    int land[100];
    int n,i,count=0,h;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        land[i]=scanf("%d",&h);
    for(i=1;i<n-1;i++) {
        if(land[i]>land[i-1]&&land[i]>land[i+1])
        count++; }
    printf("%d",count);
    return 0; }