#include <stdio.h>
int main(){
    int n,k,i;
    k=0;
    scanf("%d",&n);
    int h[n];
    for(i=0;i<=n-1;i++)
    scanf("%d",&h[i]);
    for(i=1;i<=n-2;i++)
    if(h[i]>h[i-1]&&h[i]>h[i+1])
    k++;
    printf("%d",k);
    return 0; }