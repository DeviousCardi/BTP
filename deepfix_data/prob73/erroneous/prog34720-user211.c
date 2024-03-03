#include <stdio.h>
int main() {
    int m,n,i,j,s,max=0;
    scanf("%d%d",&n,&m);
    int c[m];
    for(i=0;i<n;i++) {
        s=0;
        for(j=0;j<m;j++)
        {   scanf("%d",&c[j])
            s=s+c[j]; }
        if(max<s)
        max=s; }
    printf("%d",max);
    return 0; }