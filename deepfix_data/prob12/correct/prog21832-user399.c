#include <stdio.h>
int main() {
    int n,m=0;
    scanf("%d",&n);
    int g[2*n],d[n];
    for(int i=0;i<2*n;i++)
        scanf("%d",&g[i]);
    for(int i=1;i<=n;i++) {
        int a=0,b=0,flag=0;
        for(int j=0;j<2*n;j++) {
            if(g[j]==i) {
                flag++;
                if(flag==1)
                    a=j;
                else {
                    b=j;
                    break; } } }
        d[i-1]=b-a;
        printf("%d",d[i-1]); }
    for(int i=1;i<n;i++) {
        if(d[i]<d[m])
            m=i; }
    printf("%d",m); }