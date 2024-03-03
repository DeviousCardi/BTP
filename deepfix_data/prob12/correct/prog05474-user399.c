#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int g[2*n],d[n];
    for(int i=0;i<2*n;i++)
        scanf("%d",&g[i]);
    for(int i=1;i<=n;i++) {
        for(int j=0;j<2*n;j++) {
            int flag=0,a=0,b=0;
            if(g[j]==i)
                flag++;
            if(flag==1)
                a=j;
            if(flag==2) {
                b=j;
                break; } } } }