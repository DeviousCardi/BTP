#include <stdio.h>
int main() {
    int n,m,i,j,a[100];
    scanf("%d,",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        m=0;
        for(j=0;j<n;j++) {
            if(a[j]==a[i])
            m++; }
        if(m!=a[i])
        break; }
    if(i<n)
    printf("No");
    else printf("Yes");
    return 0; }