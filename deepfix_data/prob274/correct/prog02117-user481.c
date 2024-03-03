#include <stdio.h>
int main() {
    int n,i,j,m,a[101],b[101],k;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]); }
    for(i=0;i<n;i++) {
        b[i]=a[i]; }
    m=0;
    for(i=0;i<n;i++) {
        for(j=1;j<n;j++) {
            if(b[j]==k)
            m=1;
            if(m==1)
            break; } }
    printf("%d ",j);
    printf("%d", j-i);
        return 0; }