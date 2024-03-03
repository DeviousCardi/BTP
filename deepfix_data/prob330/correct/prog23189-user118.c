#include <stdio.h>
int main(){
    int n,i,p[100],peaks=0;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
        scanf("%d",&p[i]);
    for(i=1;i<=n-2;i++) {
        if(p[i]>p[i-1] && p[i]>p[i+1])
        peaks=peaks+1; }
    printf("%d",peaks);
    return 0; }