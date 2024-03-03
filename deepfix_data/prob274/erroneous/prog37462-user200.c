#include <stdio.h>
int main() {
    int n,c1,c2,c3,inpt[100],ordr[101],chk,c4,fst,snd,t,k;
    scanf("%d", &n);
    scanf("%c", &jnk);
    for(c1=0;c1<n;c1++) {
        scanf("%d", &inpt[c1]); }
    ordr[0]=1;
    for(c2=1;c2<(n+1);c2++) {
        ordr[c2]=inpt[ordr[c2-1]-1]; }
    chk = 0;
    for(c3=1;c3<(n+1);c3++) {
        for(c4=(c3-1);c4>=0;c4--) {
            if(ordr[c3]==ordr[c4]) {
                fst = c4;
                snd = c3;
                chk = 1;
                break; } }
        if(chk==1)
        break; }
    t = snd;
    k = snd - fst;
    printf("%d %d", t,k);
    return 0; }