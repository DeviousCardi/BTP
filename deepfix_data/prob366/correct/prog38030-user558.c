#include <stdio.h>
int main() {
    int n,i,j,min;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=n;j<2*n;j++) {
            if(a[i]==a[j]) {
                printf("%d ",j-i); }
            if((j-i)<min)
            min=(j-i); }
        printf("%d",min); }
    return 0; }