#include <stdio.h>
int main() {
    int m,n,i,p,a,s,max;
    scanf("%d %d",&n,&m);
    s=0;
    for(p=0 ; p<m ; p++) {
        scanf("%d",&a);
        s=s+a; }
    max=s;
    for(i=1 ; i<n ; i++) {
        s=0;
        for(p=0 ; p<m ; p++) {
            scanf("%d",&a);
            s=s+a; }
        if (s>max) {
                max=s; } }
    printf("%d",max);
    return 0; }