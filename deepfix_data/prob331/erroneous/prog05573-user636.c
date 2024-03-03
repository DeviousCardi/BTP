#include <stdio.h>
int main() {
    int m,n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&m);
            if(i==j) {
                if(m==1)
                else
                break; }
            if(i!=j) {
                if(m==0)
                else
                break; } } }
    return 0; }