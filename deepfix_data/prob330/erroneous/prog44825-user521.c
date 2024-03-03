#include <stdio.h>
int main(){
    int n,i,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]) }
    for(i=2;i<n;i++) {
        if((a[i]>a[i-1])&&(a[i]>a[i+1])) {
            count=count+1; } }
    printf("%d",count);
    return 0; }