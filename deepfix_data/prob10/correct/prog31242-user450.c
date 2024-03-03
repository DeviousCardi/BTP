#include<stdio.h>
void max(int n,int a[]) {
    int i,j,m=0,b[n];
            int bg=0;
    for(i=1;i<=n;i++) {
        for(j=i;j<=(n-j);j++) {
            if(a[j+1]>a[i])
            m++; }
         b[i]=m;
        m=0; }
    for(i=1;i<n;i++) {
        if(b[i]>bg)
        bg=b[i]; }
    printf("%d",bg+1); }
int main() {
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    max(n,a);
    return 0; }