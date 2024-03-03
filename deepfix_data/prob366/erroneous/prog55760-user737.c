#include <stdio.h>
int main(){
    int n,i,m=0;
    scanf("%d",&n);
    int entrance_exit[2*n],dist[n],min=n;
    for(i=0;i<2*n;i++) {
        scanf("%d",&entrance_exit[i]); }
    for(i=0;i<2*n;i++) {
        for(k=i+1;k<2*n;k++) {
            if(entrance_exit[i]==entrance_exit[k]) {
                dist[m]=k-i;
                m++; } } }
    for(i=0;i<n;i++) {
        if(dist[i]<=min)
        min=dist[i]; }
    printf("%d",min);
    return 0; }