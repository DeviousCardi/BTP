#include <stdio.h>
int main(){
    int n,i,m,j;
    m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(j=1;j<(n-1);j++) {
        if((a[j]>a[j-1])&&(a[j]>a[j+1])) {
            m++; } }
    printf("%d",m);
    return 0; }