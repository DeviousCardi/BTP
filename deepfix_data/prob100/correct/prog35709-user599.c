#include<stdio.h>
#include<limits.h>
int main() {
    int a,i,j,m,n,max[1000],final;
    scanf("%d%d\n",&m,&n);
    for(i=0;i<n;i++) {
        max[i]=-10000;
        for(j=0;j<m;j++) {
            scanf("%d",&a);
            if(a>max[i])
                max[i]=a; } }
    for(i=0;i<n-1;i++) {
        if(max[i]<max[i+1])
            final=max[i];
        else
            final=max[i+1]; }
    printf("%d",final);
    return 0; }