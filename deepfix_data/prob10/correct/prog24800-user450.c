#include<stdio.h>
void max(int n,int a[]) {
    int i,j,m=0,b[n];
            int bg=0;
    for(i=n;i>=1;i--) {
        b[i]=m;
        m=0;
        for(j=1;j<i;j++) {
            if(a[j+1]>a[j])
            m++; } }
    for(i=1;i<n;i++) {
        if(b[i]>bg)
        bg=b[i]; }
    printf("%d",bg); }
int main() {
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    max(n,a);
    return 0; }