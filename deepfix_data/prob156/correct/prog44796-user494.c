#include <stdio.h>
int main() {
    int n,m;
    int tg[n];
    int heap[m];
    for(int j=0;j<n;++j) {
        tg[j]=0;
        for(int i=0;i<m;++i) {
            scanf("%d", &heap[i]);
            tg[j]=tg[j]+heap[i]; } }
    int max;
    for(int i=0;i<n-1;++i) {
        if(tg[i]<=tg[i+1]&&max<tg[i+1])
        max=tg[i+1];
        else if(tg[i]>tg[i+1]&&max<tg[i])
        max=tg[i]; }
    printf("%d",max);
    return 0; }