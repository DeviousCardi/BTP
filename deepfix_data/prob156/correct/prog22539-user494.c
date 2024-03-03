#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int tg[n];
    int heap[m];
    for(int j=0;j<n;++j) {
        tg[j]=0;
        for(int i=0;i<m;++i) {
            scanf("%d", &heap[i]);
            tg[j]=tg[j]+heap[i]; } }
    int max=tg[0];
    for(int i=0;i<n;++i) {
        if(max<tg[i])
        max=tg[i]; }
    printf("%d",max);
    return 0; }