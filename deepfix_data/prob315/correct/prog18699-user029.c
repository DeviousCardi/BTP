#include<stdio.h>
int main() {
    int n,a[1000],t=0,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int x=0;x<n;x++)
    {c=0;
        for(int y=x;y<n;y++) {
            if(x<y) {
                if(a[x]>a[y]) {
                   c++; } }
        }printf("%d ",c); t=t+c; }
    printf("%d",t); }