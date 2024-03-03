#include <stdio.h>
int main(){
    int n,a[n],i,k;
    int max=0;
    scanf("%d\n",&n);
    a[0]=1;
    for(i=1;i<=n;i++)
    {  scanf("%d",&a[i]);
        for(k=i;k<=n-i;k++) {
             if(a[i+k]-a[i]==0)
            { i=max;
            max++;
             break; } } }
    printf("%d ",max);
    printf("%d",k-2);
    return 0; }