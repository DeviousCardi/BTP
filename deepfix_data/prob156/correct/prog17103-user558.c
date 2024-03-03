#include <stdio.h>
int main() {
    int n,m,i,j,a,max=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) {
        int s=0;
        for(j=0;j<m;j++) {
            scanf("%d",&a);
            s=s+a; }
        if(s>max)
        max=s; }
    printf("%d",max); }