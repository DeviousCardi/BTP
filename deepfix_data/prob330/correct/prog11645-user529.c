#include <stdio.h>
int main() {
    int n,i,count=0;
    scanf("%d",&n);
    int land[n];
    for(i=1;i<n-1;i++) {
        if(land[i]>land[i-1]&&land[i]>land[i+1])
        count++; }
    printf("%d",count);
    return 0; }