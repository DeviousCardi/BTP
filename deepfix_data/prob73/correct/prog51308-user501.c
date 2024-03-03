#include <stdio.h>
int main() {
    int h,n,m,i=0,j=0;
    scanf("%d%d",&n,&m);
    int a[n];
    while(i<n)
        {while(j<m)
            scanf("%d",&h);
            a[i]+=h; }
    printf("%d",h);
    return 0; }