#include <stdio.h>
int main() {
    int n,m,i,j,tg,mg=0,g;
    scanf("%d %d\n",&n,&m);
    for(i=0;i<n;i++) {
        for(j=0,tg=0;j<m;j++) {
            scanf("%d ",&g);
            tg=tg+g; }
        if(mg<tg)
            mg=tg; }
    printf("%d",mg);
    return 0; }