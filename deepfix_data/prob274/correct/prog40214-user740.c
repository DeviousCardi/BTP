#include <stdio.h>
int main() {
    int a[100],i,n,j,k,l,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
        if(i!=j) {
            if(a[i]==a[j])
            break; } }
    while(i!=j) {
        a[i]=a[a[i]];
        count++; }
    printf("%d%d",count,count-i+1);
    return 0; }