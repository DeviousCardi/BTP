#include <stdio.h>
int main() {
int n,m;
int a;
int s=0;
scanf("%d %d",&n,&m);
int max=0;
int i,j;
for(i=1;i<=n;i++) {
    s=0;
        for(j=1;j<=m;j++) {
        scanf("%d",&a);
        s=s+a; }
        if(s>max) {
        max=s; } }
    printf("%d",max);
    return 0; }