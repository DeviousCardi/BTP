#include <stdio.h>
int main() {
    int n,i,j,k,count=0,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d,",&a[i]); }
    for(i=0;i<n;i++) {
        count=0;
        k=a[i];
        for(j=0;j<n;j++) {
           if(k==a[j])
           count=count+1; }
        if(k==count)
        cnt=cnt+1; }
    if(cnt==n)
    printf("Yes");
    else
    printf("No");
    return 0; }