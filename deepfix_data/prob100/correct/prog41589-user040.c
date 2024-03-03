#include<stdio.h>
#include<limits.h>
int main() {
int i,j,n,m,rmax,ans,a;
scanf("%d%d" ,&n,&m);
ans=INT_MAX;
for(i=0;i<m;i++) {
    rmax=INT_MIN;
    for(j=0;j<n;j++) {
        scanf("%d" ,&a);
        if(rmax<a)
        rmax=a; }
    if(rmax<ans)
    ans=rmax; }
    printf("%d" ,ans);
    return 0; }