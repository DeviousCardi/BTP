#include <stdio.h>
int main(){
    int n,i,p[n],peaks;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
     peaks=0;
    for(i=0;i<n;i++) {
        if(p[i]>p[i-1] && p[i]>p[i+1])
        peaks=peaks+1; }
    printf("%d",peaks);
    return 0; }