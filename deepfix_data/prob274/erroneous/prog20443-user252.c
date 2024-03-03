#include <stdio.h>
int main() {
    int n,i,m,k,j=0,ex[100],t=1,c[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&ex[i]); }
    m=0;
    for(a=1;a<=n;a++) {
        for(b=0;;) {
            if(a==ex[b]) {
                k=j;
                t=k+a-1
                break; }
            else if(a!=ex[b] && c[b]!=0) {
                j++;
                k=ex[a];
                b=ex[k];
                c[b]++; }
            else break; } }
    printf("%d %d",t,k);
    return 0; }