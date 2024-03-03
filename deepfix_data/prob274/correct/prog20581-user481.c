#include <stdio.h>
int main() {
    int n,i,j,m,a[101],k;
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        scanf("%d", &a[i]); }
    m=0;
    for(i=1;i<=n;i++) {
        k=a[i];
        for(j=1;j<=n;j++) {
            if(a[j]==k)
            m=1;
            if(m==1)
            break; } }
    printf("%d ",j);
    printf("%d", j-i);
        return 0; }