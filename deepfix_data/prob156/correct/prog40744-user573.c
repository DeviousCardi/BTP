#include <stdio.h>
int main() {
    int m,n,num,large=0,i,j,s;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++) {
            s=0;
            for(j=1;j<m;j++) {
            scanf("%d",&num);
            s=s+num; }
            if(s>large)
            large=s; }
    return 0; }