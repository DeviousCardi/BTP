#include <stdio.h>
int main() {
    int n,i,j,m,a[101];
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        scanf("%d", &a[i]); }
    for(i=1;i<=n;i++) {
            m=0;
            for(j=1;j<n;j++) {
                    if(a[j]==a[i])
                    m=1;
                    if(m==1)
                    break; }
            if(m==1)
            break; }
    if(m==1) {
    printf("%d ",j);
    printf("%d", j-1); }
        return 0; }