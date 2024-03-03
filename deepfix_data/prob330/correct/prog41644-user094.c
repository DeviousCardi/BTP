#include <stdio.h>
int main(){
    int n,a[100],i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<(n-1);i++) {
        if((a[i]>a[i-1])&&(a[i]>a[i+1]))
        count=count+1; }
    printf("%d",count);
    return 0; }