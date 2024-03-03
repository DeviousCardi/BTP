#include <stdio.h>
int main(){
    int i,n,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=2;i<n-1;i++)
            {if(a[i]>a[i-1] && a[i]>a[i+1])
                count=count+1};
                printf("%d",count);
    return 0; }