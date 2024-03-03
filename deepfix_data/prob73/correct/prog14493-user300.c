#include <stdio.h>
int main() {
    int n,m,i,j,h,sum=0,max=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
           scanf("%d",&h);
           sum=sum+h; }
        if(sum>m) {
            max=sum; } }
    printf("&d",max);
    return 0; }