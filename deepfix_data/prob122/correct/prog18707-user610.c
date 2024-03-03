#include <stdio.h>
int main() {
    int n,i,j,m,k;
    scanf("%d",&n);
    for(k=1;k<=1;k++) {
        for(i=1;i<=n;i++) {
            for(j=1;j<=n;j++) {
                scanf("%d",&m);
                if(i==j) {
                    if(m!=1)
                    break; }
                else if(i!=j) {
                    if(m!=0)
                    break; } } } }
    return 0; }