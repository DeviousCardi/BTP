#include <stdio.h>
int main() {
    int n,i,t=0,k=0;
    scanf("%d",&n);
    int doors[n+1],visit[1000];
    doors[0]=0;
    for(i=1;i<=n;i++) {
        scanf("%d",&doors[i]); }
    x=0;
    i=1;
    while(x<1000) {
        visit[x]=doors[i];
        i=doors[i];
        x++; }
    return 0; }