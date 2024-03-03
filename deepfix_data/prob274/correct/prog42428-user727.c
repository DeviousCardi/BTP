#include <stdio.h>
#include<stdlib.h>
int main() {
    int n,a[1001],p,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    i=0;
    while(i<=n) {
        i=a[i];
        for(j=0;j<=i;j++) {
            for(p=0;p<=i&&p!=j;p++) {
                if(a[p]==a[j]) {
                    printf("%d ",p>j?p+2:j+2);
                    printf("%d ",abs(p-j)+1);
                    return 0; } } } }
    return 0; }