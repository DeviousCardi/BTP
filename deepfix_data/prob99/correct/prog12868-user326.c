#include<stdio.h>
int main() {
    int n;
    int m=-1,c=0,q=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int w=0;
    for(int i=0;i<n;i++) {
        w=i;
        for(int j=w;j<n;j++) {
            if(a[j]>a[w]) {
                c++;
                w=j; } }
        q=c;
        c=0;
        if(q>m)
        m=q; }
    printf("%d",m);
    return 0; }