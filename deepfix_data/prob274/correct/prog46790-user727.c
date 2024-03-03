#include <stdio.h>
int main() {
    int n,a[1001],p,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    while(i<=n) {
        i=a[i];
        for(j=0;j<=i;j++) {
            for(p=0;p<=i&&p!=j;p++) {
                if(a[p]==a[j])
                {printf("%d",p-j);
                printf("%d",p>j?p:j);
                return 0;} } } }
    return 0; }