#include <stdio.h>
int main() {
    int n;
    int i,j,k,count,m;
    int str[200];
    scanf("%d",&n);
    for(i=0;i<=2*n;i++) {
        scanf("%d",&str[i]); }
    m=2*n;
    for(j=0;j<n;j++) {
        for(k=n;k<2*n;k++) {
            if(str[j]==str[k]) {
                count=k-j; }
            if(count<m) {
                m=count; } } }
    printf("%d",m);
    return 0; }