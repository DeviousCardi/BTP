#include <stdio.h>
int main() {
    int i,j,n,m=0;
    scanf("%d\n",&n);
    int a[n+1];
    for(i=0;i<=n;i++)
        a[i]=0;
    for(i=0;i<n;i++) {
        scanf("%d",&j);
        a[j]++;
        if(j>m) m=j; }
    j=0;
    for(i=0;i<=m;i++)
        if(a[i]!=i)
            j=1;
    if(j==1) printf("No");
    else printf("Yes");
    return 0; }