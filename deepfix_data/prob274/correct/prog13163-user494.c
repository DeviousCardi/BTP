#include <stdio.h>
int main() {
    int n,i,t=0,k=0,x;
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
    for(i=1;i<1000;i++) {
        if(visit[i]==visit[0]) {
            break; } }
    t=i+1;
    k=i;
    printf("%d %d",t,k);
    return 0; }