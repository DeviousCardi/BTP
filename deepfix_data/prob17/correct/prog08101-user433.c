#include <stdio.h>
int main() {
    int m,n,a[20],b[20],i,j,k=0;
    scanf("%d",&m);
    for(i=0;i<m;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<m;i++) {
        if(a[0]==b[i]) {
            for(j=1;j<n;j++) {
                if(a[j]==b[i+j])
                k++; }
                    if(k==n-2) {
            printf("YES");
            return 0; } } }
    printf("NO");
    return 0; }