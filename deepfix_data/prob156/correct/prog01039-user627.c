#include <stdio.h>
int main() {
    int n,m,s=0,g,max=0,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&g);
            s=s+g; }
        if(s>max) {
            max=s; } }
    printf("%d",max);
    return 0; }