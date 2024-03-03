#include <stdio.h>
int main() {
    int a[100],i,count=0,n;
    scanf("%d",&n);
    for(i=1;i<n-1;i++) {
            if(a[i]>a[i-1]&&a[i]>a[i+1])
                count=count+1; }
    printf("\n%d",count);
    return 0; }