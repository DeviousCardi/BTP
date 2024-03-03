#include<stdio.h>
#include<limits.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j,x,max=0,out;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&x);
            if(max<x)
            max=x; }
        scanf("%d",&max);
        if(out<max)
        out=max; }
    printf("%d",out);
    return 0; }