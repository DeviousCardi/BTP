#include <stdio.h>
int main() {
    int n,m=0;
    scanf("%d",&n);
    int g[2*n],d;
    for(int i=0;i<2*n;i++)
        scanf("%d",&g[i]);
    for(int i=0;i<2*n;i++) {
        for(int j=i+1;j<2*n;j++) {
            if(g[i]==g[j]) {
                d=j-i;
                printf("%d  ",d); } } } }