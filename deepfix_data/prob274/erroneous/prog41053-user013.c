#include <stdio.h>
int main(){
    int n,a[n],i,k,max;
    scanf("%d\n",&n);
    a[0]=1;
    for(i=1;i<=n;i++)
    {  scanf("%d",&a[i]);
        for(k=1;k<=n-i;k++) {
            if(a[i+k]-a[i]==0)
            { i=max;
             break } } }
    printf("%d ",k+max);
    printf("%d",k+2);
    return 0; }