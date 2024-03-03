#include <stdio.h>
int main() {
    int n,m,s=0,g,max,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) {
        s=0;
        for(j=0;j<m;j++) {
            scanf("%d",&g);
            s=s+g; }
        if(s>max) {
            max=s; } }
    printf("%d",max);
    return 0; }