#include<stdio.h>
#include<limits.h>
int main() {
    int a,i,j,m,n,max[10000],final=-10000;
    scanf("%d%d\n",&m,&n);
    for(i=0;i<n;i++) {
        max[i]=-10000;
        for(j=0;j<m;j++) {
            scanf("%d",&a);
            if(a>max[i])
                max[i]=a; }
        if(final<max[i])
            final=max[i]; }
    printf("%d",final);
    return 0; }